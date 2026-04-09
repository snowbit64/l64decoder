// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DisplayMonitor
// Entry Point: 00a9ad04
// Size: 156 bytes
// Signature: undefined __thiscall DisplayMonitor(DisplayMonitor * this, IRenderWindow * param_1, float param_2)


/* DisplayMonitor::DisplayMonitor(IRenderWindow*, float) */

void __thiscall
DisplayMonitor::DisplayMonitor(DisplayMonitor *this,IRenderWindow *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  COLORSPACE CVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  CVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  Display2D::Display2D((Display2D *)this,uVar1,uVar2,param_2,CVar3,false);
  *(IRenderWindow **)(this + 0x20) = param_1;
  *(undefined ***)this = &PTR__IDisplay_00fe4690;
  return;
}


