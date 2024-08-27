import React from 'react'
import './Card.css'
import Button from './Button'

const Card = (props) => {
  return (
    <div className='Card'>
      <h2>{props.title}</h2>
      <p>{props.description}</p>
      <Button/>
    </div>
  )
}

export default Card
