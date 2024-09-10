"use client"
import Image from "next/image";
import Script from "next/script";

import Link from 'next/link'

import {submitAction} from "@/actions/form";
import { useRef } from "react";



export default function Home() {
  //for this "use client" is required
  const handlePost = async() => {
    let data = {
      'name': 'prathmesh',
      'age': 20,
      'gender': 'male'
    }
    let a = await fetch('/api/add', {
      method: "POST",
      body: JSON.stringify(data),
      headers: {
        "Content-Type": "application/json",
      },
    })
    let res = await a.json()
    console.log(res)
  }

  //for this either use "use client" (at top) or "use server" (inside this function) but we will do this in our actions folder
  // const submitAction = async (e) => {
  //   //"use server"
  //   console.log(e.get('Name'), e.get('Age'))
  // }
  let ref = useRef()

  return (
    <>
      <div>
        hi, this is my first next.js app
        <Script>{`alert('scrpts')`}</Script>
        <div className="container">
          <Image className='mx-auto' src='https://media-cdn.tripadvisor.com/media/photo-s/0c/bb/a3/97/predator-ride-in-the.jpg' width={100} height={100} alt='sample'/>
        </div>
      </div>

      <div>
        <h3>post requests</h3>
        <button onClick={handlePost}>post</button>
      </div>

      <div>
        <h3>Form handling</h3>

        <form ref={ref} action={(e) => {{submitAction(e); ref.current.reset()}}}>
          <label htmlFor="Name">Name</label>
          <input type="text" name='Name' id='Name' className='border border-black' />
          <br />
          <label htmlFor="Age">Age</label>
          <input type="text" name='Age' id='Age' className='border border-black' />
          <br />
          <button>submit</button>
        </form>
      </div>

      <div>
        <button>
          <Link href="/signin">signIn</Link>
        </button>
      </div>
    </>
  );
}
