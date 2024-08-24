import { useEffect, useState, useRef } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

import Navbar from './components/Navbar'
import Card from './components/Card'
import Footer from './components/Footer'

function App() {
  const [count, setCount] = useState(0)
  const [showbtn, setshowbtn] = useState(true)
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



  return (
    <>
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
      {
        color.map(color => {
          return <Color color = {color}/>
        })
      }

      <Footer />
    </>
  )
}

export default App
