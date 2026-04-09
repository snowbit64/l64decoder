// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NavigationPath
// Entry Point: 008726cc
// Size: 76 bytes
// Signature: undefined __thiscall NavigationPath(NavigationPath * this, char * param_1, bool param_2)


/* NavigationPath::NavigationPath(char const*, bool) */

void __thiscall NavigationPath::NavigationPath(NavigationPath *this,char *param_1,bool param_2)

{
  Entity::Entity((Entity *)this,param_1,true);
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (NavigationPath)param_2;
  *(undefined ***)this = &PTR__NavigationPath_00fdc1c8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x40000000;
  return;
}


