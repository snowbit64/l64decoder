// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodePoint
// Entry Point: 00cd0610
// Size: 188 bytes
// Signature: undefined __thiscall EncodePoint(EC2N * this, uchar * param_1, EC2NPoint * param_2, bool param_3)


/* non-virtual thunk to CryptoPP::EC2N::EncodePoint(unsigned char*, CryptoPP::EC2NPoint const&,
   bool) const */

void __thiscall
CryptoPP::EC2N::EncodePoint(EC2N *this,uchar *param_1,EC2NPoint *param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined **local_78;
  undefined **ppuStack_70;
  uchar *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(this + -8);
  uVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,param_3);
  Algorithm::Algorithm((Algorithm *)&local_78,false);
  local_50 = 0;
  local_78 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_70 = &PTR__ArraySink_01008070;
  local_60 = param_1;
  uStack_58 = uVar2 & 0xffffffff;
  (**(code **)(*plVar3 + 0x98))(plVar3,&local_78,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


