import { z } from 'zod';
import express from 'express'; 

const app = express();

const userSchema = z.object({
    id: z.string().uuid(),
    email: z.string().email(),
    name: z.string().min(1),
});

export type User = z.infer<typeof userSchema>; // This infers the TypeScript type from the Zod schema
// we can use this type in our application to ensure type safety by import it in frontend files

app.put('/user', (req, res) => {
    try {
        const userData = userSchema.safeParse(req.body);
        // If validation passes, userData will have the correct type
        res.status(200).json({ message: 'User data is valid', userData });
    } catch (error) {
        if (error instanceof z.ZodError) {
            res.status(400).json({ message: 'Invalid user data', errors: error.errors });
        } else {
            res.status(500).json({ message: 'Internal server error' });
        }
    }
})