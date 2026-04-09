// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00d0b2d8
// Size: 180 bytes
// Signature: undefined __thiscall UncheckedSetKey(BlockOrientedCipherModeBase * this, uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::BlockOrientedCipherModeBase::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::BlockOrientedCipherModeBase::UncheckedSetKey
          (BlockOrientedCipherModeBase *this,uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 0x38))(*(long **)(this + 0x10),param_1,param_2);
  (**(code **)(*(long *)this + 0x98))(this);
  iVar2 = (**(code **)(*(long *)this + 0x40))(this);
  if (iVar2 < 4) {
    uVar3 = SimpleKeyingInterface::GetIVAndThrowIfInvalid
                      ((SimpleKeyingInterface *)this,param_3,(ulong *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,uVar3,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


