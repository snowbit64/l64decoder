// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Peek
// Entry Point: 00c7a6c8
// Size: 228 bytes
// Signature: undefined __thiscall Peek(BufferedTransformation * this, uchar * param_1, ulong param_2)


/* CryptoPP::BufferedTransformation::Peek(unsigned char*, unsigned long) const */

void __thiscall
CryptoPP::BufferedTransformation::Peek(BufferedTransformation *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  ulong uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0x168))();
  if (lVar2 == 0) {
    local_40 = 0;
    local_70 = 0;
    local_68 = &PTR__BufferedTransformation_01007ee0;
    ppuStack_60 = &PTR__ArraySink_01008070;
    local_50 = param_1;
    uStack_48 = param_2;
    (**(code **)(*(long *)this + 0x120))(this,&local_68,&local_70,param_2,&DEFAULT_CHANNEL,1);
    uVar4 = local_70;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00c7a7a8;
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x168))(this);
    uVar4 = (**(code **)(*plVar3 + 0xc0))(plVar3,param_1,param_2);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00c7a7a8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
  }
  return;
}


