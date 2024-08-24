import React from 'react'
import { useEffect, useState } from 'react'
import './Navbar.css'

const Navbar = ({color}) => {
  //const [color, setcolor] = useState({'red'})
  useEffect(() => {
    console.log('color was changed')
  }, [color])
  
  return (
    <div className='Navbar'>
      <p>the color of nav is {color}</p>
      <ul>
        <li>home</li>
        <li>about</li>
        <li>contact</li>
      </ul>
    </div>
  )
}

export default Navbar
