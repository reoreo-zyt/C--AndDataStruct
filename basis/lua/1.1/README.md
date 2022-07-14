交互模式：

```lua
lua -i prog.lua
```

prog.lua 可以在编辑器中编写代码，通过 dofile 可以加载其他文件，然后在交互模式中调用其他文件的代码。

dofile 加载文件：

```lua
dofile("lib1.lua");
```