import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

import Navbar from './components/Navbar'
import Card from './components/Card'
import Footer from './components/Footer'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
      <Navbar/>

      <Card title='card #1' description='this is first card'/>
      <Card title='card #2' description='this is second card'/>
      <Card title='card #3' description='this is third card'/>
      <Card title='card #4' description='this is forth card'/>

      <Footer/>
    </>
  )
}

export default App
