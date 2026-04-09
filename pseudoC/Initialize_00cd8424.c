// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00cd8424
// Size: 224 bytes
// Signature: undefined __thiscall Initialize(Redirector * this, NameValuePairs * param_1, int param_2)


/* CryptoPP::Redirector::Initialize(CryptoPP::NameValuePairs const&, int) */

void __thiscall
CryptoPP::Redirector::Initialize(Redirector *this,NameValuePairs *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"RedirectionTargetPointer",&BufferedTransformation*::typeinfo,&local_40
                    );
  uVar1 = CONCAT44(uStack_3c,local_40);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"RedirectionBehavior",&int::typeinfo,&local_40);
  plVar4 = *(long **)(this + 0x18);
  if ((uVar3 & 1) == 0) {
    local_40 = 3;
  }
  *(uint *)(this + 0x20) = local_40;
  if ((plVar4 != (long *)0x0) && ((local_40 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x70))(plVar4,param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


