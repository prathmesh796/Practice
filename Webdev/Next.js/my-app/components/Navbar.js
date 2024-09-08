"use client"
import React from 'react'
import Link from 'next/link'

const Navbar = () => {
  return (
    <div className='flex bg-black text-white justify-center'>
      <ul className='flex gap-5'>
        <Link href="/"><li>home</li></Link>
        <Link href="/about"><li>about</li></Link>
        <Link href="/contact"><li>contact</li></Link>
      </ul>
    </div>
  )
}

export default Navbar
