```flow
st=>start: start
e=>end: end
op=>operation: operation
cond=>condition: y or n?
put=>inputoutput: enter y or n
st->put->op->cond
cond(yes)->e
cond(no)->op
```