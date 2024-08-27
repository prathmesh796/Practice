import React, { useContext } from 'react'
import { counterContext } from '../context/context'

const Button = () => {
    const value = useContext(counterContext)
  return (
    <div>
      <button onClick={() =>  value.setCount(value.count + 1)}>{value.count}</button>
    </div>
  )
}

export default Button
