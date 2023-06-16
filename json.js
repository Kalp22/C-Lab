let json = {
    data: {
        d1:"a",
        d2:"b",
        d3:"c",
        d4:"d",
        d5:"e",
        d6:"f",
        d7:"g",
        d8:"h",
        d9:"i",
        d10:"j"
    },
    v: {
        v1:null,
        v2:"w",
        v3:"e",
        v4:"r",

    },
    numbers: {
        one:1,
        two:2,
        three:3,
        four:4,
        five:5
    }
}
console.log(json);

// for (const key in json) {
//     for (const val in key) {
//         console.log(val)
//     }
// }

function a(json) {
    json.map( ([key, val] = entry) => {
        if(typeof val == "object"){
          let  temp = Object.entries(val);
          a(temp[1]);
        }
        else{
            console.log(key,val)
            
        }
      });
    
}

json = Object.entries(json)
a(json)


