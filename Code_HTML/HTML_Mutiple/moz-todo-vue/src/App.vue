<template>
  <div id="app">
    <h1>To-Do List</h1>
    <to-do-form></to-do-form>
    <ul>
      <li v-for="item in ToDoItems" :key="item.id">
        <to-do-item :label="item.label" :done="item.done" :id="item.id"></to-do-item>
      </li>
    </ul>
  </div>  
</template>

<script>
import uniqueId from 'lodash.uniqueid';
import ToDoItem from './components/ToDoItem.vue';
import ToDoForm from './components/ToDoForm.vue';
export default {
  name: 'App',
  components:{
    ToDoItem,
    ToDoForm
  },
  data(){
    return{
      ToDoItems:[
        {id:uniqueId('todo-'),label:'Learn VUE',done:false},
        {id:uniqueId('todo-'),label:'Create a VUE project with the CLI',done:true},
        {id:uniqueId('todo-'),label:'Have fun',done:true},
        {id:uniqueId('todo-'),label:'Create a to-do list',done:false}
      ]
    };
  }
};
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
