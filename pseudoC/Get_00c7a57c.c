// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Get
// Entry Point: 00c7a57c
// Size: 224 bytes
// Signature: undefined __thiscall Get(BufferedTransformation * this, uchar * param_1, ulong param_2)


/* CryptoPP::BufferedTransformation::Get(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::BufferedTransformation::Get(BufferedTransformation *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  ulong uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0x160))();
  if (lVar2 == 0) {
    local_40 = 0;
    local_68 = &PTR__BufferedTransformation_01007ee0;
    ppuStack_60 = &PTR__ArraySink_01008070;
    local_70 = param_2;
    local_50 = param_1;
    uStack_48 = param_2;
    (**(code **)(*(long *)this + 0x118))(this,&local_68,&local_70,&DEFAULT_CHANNEL,1);
    uVar4 = local_70;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00c7a658;
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar4 = (**(code **)(*plVar3 + 0xb0))(plVar3,param_1,param_2);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00c7a658:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
  }
  return;
}


