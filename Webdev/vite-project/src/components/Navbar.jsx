import React from 'react'
import { useEffect, useState, memo } from 'react'
import './Navbar.css'

import { NavLink } from 'react-router-dom'

const Navbar = ({color, adjective, getadjective}) => {
  console.log("navbar reander");
  //const [color, setcolor] = useState({'red'})
  useEffect(() => {
    console.log('color was changed')
  }, [color])
  
  return (
    <div className='Navbar'>
      <p>the color of nav is {color + adjective}</p>
      <button onClick={() => {getadjective()}}>{color + adjective}</button>
      
      
      <ul>
        <NavLink to="/">home</NavLink>
        <NavLink to="/about">about</NavLink>
        <NavLink to="/contact">contact</NavLink>
      </ul>
    </div>
  )
}

export default memo(Navbar)
