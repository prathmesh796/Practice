// CURD - create, insert, update, delete

use('Practice')

//INSERT

// db.database.insertOne({
//     "name" : "python",
//     "cost": 4500,
//     "duration": 5
// })

// db.database.insertMany([
//     {
//         "name": "cpp",
//         "cost": 9000,
//         "duration": 1
//     },
//     {
//         "name": "c",
//         "cost": 1000,
//         "duration": 1.5
//     }
// ])

// UPDATE

db.database.updateOne({cost: 4500}, {$set:{cost: 5000}})

db.database.updateMany({cost: 1000}, {$set:{cost: 5000}})

// DELETE

db.database.deleteOne({cost: 5000})