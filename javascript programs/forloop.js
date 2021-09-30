const states = ["haryana", "rajasthan", "punjab", 12332, "delhi"];
for (let i = 0; i < states.length; i++) {
  if (typeof states[i] !== "string") break;
  console.log(states[i]);
}
