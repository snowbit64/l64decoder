// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCVs
// Entry Point: 00b5f57c
// Size: 152 bytes
// Signature: undefined __thiscall setCVs(Spline * this, uint param_1, float * param_2)


/* Spline::setCVs(unsigned int, float const*) */

void __thiscall Spline::setCVs(Spline *this,uint param_1,float *param_2)

{
  void *pvVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = (ulong)param_1;
  if (*(uint *)(this + 0x28) == param_1) {
    pvVar1 = *(void **)(this + 0x18);
    iVar3 = *(int *)(this + 0x20);
  }
  else {
    *(uint *)(this + 0x28) = param_1;
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
      uVar2 = (ulong)*(uint *)(this + 0x28);
    }
    iVar3 = *(int *)(this + 0x20);
    pvVar1 = operator_new__((ulong)(uint)((iVar3 + (int)uVar2 + *(int *)(this + 0x24)) * 3) << 2);
    *(void **)(this + 0x18) = pvVar1;
  }
  memcpy((void *)((long)pvVar1 + (ulong)(uint)(iVar3 * 3) * 4),param_2,uVar2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00b5f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this);
  return;
}


