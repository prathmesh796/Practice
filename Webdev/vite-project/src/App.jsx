import { useEffect, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

import Navbar from './components/Navbar'
import Card from './components/Card'
import Footer from './components/Footer'

function App() {
  const [count, setCount] = useState(0)
  const [color, setColor] = useState(0)

  //effect for first time the page loads
  useEffect(() => {
    alert('app has been started')
  })

  //effect when page reloads every time
  useEffect(() => {
    alert('the has been loaded')
  }, [])

  //effect when count is changed/updated
  useEffect(() => {
    alert('the count been updated')
    //setColor{color + 1}
  }, [count])
  
  

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
      <button onClick={() => { setCount(count + 1) }}>update count</button>

      <Footer />
    </>
  )
}

export default App
