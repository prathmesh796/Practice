import { useEffect, useState, useRef, useContext } from 'react'
import { counterContext } from './context/context'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

import Navbar from './components/Navbar'
import Card from './components/Card'
import Footer from './components/Footer'


function App() {
  const [count, setCount] = useState(0)
  const [showbtn, setshowbtn] = useState(true)
  const [text, settext] = useState("handling")
  const [form, setform] = useState({ "email": "", "phone": "" })
  const [color, setcolor] = useState([
    {
      'title': 'red',
      'desc': 'i am red color'
    },
    {
      'title': 'blue',
      'desc': 'i am blue color'
    },
    {
      'title': 'green',
      'desc': 'i am green color'
    }
  ])

  const Color = ({ color }) => {
    return (<>
      <div className="color">{color.title}</div>
      <div className="color">{color.desc}</div>
    </>

    )
  }

  //effect for first time the page loads
  useEffect(() => {
    console.log('app has been started')
  })

  //effect when page reloads every time
  useEffect(() => {
    console.log('the has been loaded')
  }, [])

  //effect when count is changed/updated
  useEffect(() => {
    console.log('the count been updated')
    //setColor{color + 1}
  }, [count])

  let a = useRef(0)

  useEffect(() => {
    a = a + 1
    console.log(a)
  }, [])

  let handleClick = () => {
    console.log("the event handling button is clicked")
  }

  let handleMouseOver = () => {
    console.log("the is being hovered")
  }

  let handleChange = (e) => {
    settext(e.target.value)
    console.log("the is text is being changed")
  }

  let handleChangeForm = (e) => {
    setform({ ...form, [e.target.name]: e.target.value })
    setform({ ...form, [e.target.value]: e.target.value }) //this will add new items in obj instead of updateing current ones
    console.log(form)
  }

  return (
    <>
      <counterContext.Provider value={{count, setCount}}>
        <Navbar color={'blue'} />

        <div className='cards'>
          <Card title='card #1' description='this is first card' />
          <Card title='card #2' description='this is second card' />
          <Card title='card #3' description='this is third card' />
          <Card title='card #4' description='this is forth card' />
        </div>


        <p>The current value of count = {count}</p>
        <button onClick={() => { setCount(count + 1); setshowbtn(!showbtn) }}>update count</button>

        {
          //conditional rendering in react
        }
        {showbtn ? <button>showbtn is true</button> : <button>showbtn is false</button>}

        {showbtn && <button>showbtn is true</button>}

        {
          //rendering a list in react
        }
        {/* {
        color.map(color => {
          return <Color color = {color}/>
        })
      } */}

        {/* {event handling in react} */}
        <button onClick={handleClick}>event handling</button>
        <div className="event" onMouseOver={handleMouseOver}>this is a event</div>
        <input type="text" value={text} onChange={handleChange} />
        <input type="text" name="email" value={form.email} onChange={handleChangeForm} />
        <input type="text" name="phone" value={form.phone} onChange={handleChangeForm} />

        <Footer />
      </counterContext.Provider>
    </>
  )
}

export default App
