"use server"

import fs from 'fs/promises'

export const submitAction = async (e) => {
    //"use server"
    console.log(e.get('Name'), e.get('Age'))
}