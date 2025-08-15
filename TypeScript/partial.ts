// Partial makes all properties of a type optional, creating a type with same properties, but each marked as optional

// Something like this:
// user {
//  id?: string,
//  ...
//}

interface User {
    id: number;
    name: string;
    email: string;
    age: number;
}

type UserProfilePartial = Pick<User, 'id' | 'email'>;

type UpdateUserProfile = Partial<UserProfilePartial>;

function updateUser(UpdateProfilePartial: UpdateUserProfile){
    // hit db and update
}

