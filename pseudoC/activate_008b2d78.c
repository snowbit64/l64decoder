// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008b2d78
// Size: 204 bytes
// Signature: undefined __thiscall activate(Sample * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to Sample::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool __thiscall
Sample::activate(Sample *this,IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3
                )

{
  int iVar1;
  Sample *pSVar2;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 == 0) && (this[0x10] != (Sample)0x0)) {
    pSVar2 = this + -0x20;
    (**(code **)(*(long *)(this + -0x20) + 0x88))(pSVar2,param_2);
    (**(code **)(*(long *)(this + -0x20) + 0x98))(*(undefined4 *)(this + 0x38),pSVar2);
    (**(code **)(*(long *)(this + -0x20) + 0xb8))
              (*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x40),pSVar2);
    (**(code **)(*(long *)(this + -0x20) + 0xa0))(pSVar2,this + 0x14);
    (**(code **)(*(long *)(this + -0x20) + 0xa8))(pSVar2,this + 0x2c);
    (**(code **)(*(long *)(this + -0x20) + 200))(*(undefined4 *)(this + 0x44),pSVar2);
    (**(code **)(*(long *)(this + -0x20) + 0xd0))(pSVar2,*(undefined4 *)(this + 0x48));
    iVar1 = 3;
    *(undefined4 *)(this + 8) = 3;
  }
  return iVar1 == 3;
}


