// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodePoint
// Entry Point: 00cd20a8
// Size: 424 bytes
// Signature: undefined __thiscall EncodePoint(ECP * this, BufferedTransformation * param_1, ECPPoint * param_2, bool param_3)


/* CryptoPP::ECP::EncodePoint(CryptoPP::BufferedTransformation&, CryptoPP::ECPPoint const&, bool)
   const */

void __thiscall
CryptoPP::ECP::EncodePoint(ECP *this,BufferedTransformation *param_1,ECPPoint *param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  Integer *this_00;
  undefined uVar3;
  ulong local_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  undefined4 local_5c;
  undefined local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[0x68] == (ECPPoint)0x0) {
    if (param_3) {
      uVar2 = Integer::GetBit((Integer *)(param_2 + 0x38),0);
      uVar3 = 2;
      if ((uVar2 & 1) != 0) {
        uVar3 = 3;
      }
      local_70 = (undefined **)CONCAT71(local_70._1_7_,uVar3);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_70,1,0,1);
      this_00 = (Integer *)(param_2 + 8);
      uVar2 = ModularArithmetic::MaxElementByteLength();
      uVar2 = uVar2 & 0xffffffff;
    }
    else {
      uVar2 = ModularArithmetic::MaxElementByteLength();
      uVar2 = uVar2 & 0xffffffff;
      local_70 = (undefined **)CONCAT71(local_70._1_7_,4);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_70,1,0,1);
      Integer::Encode((Integer *)(param_2 + 8),param_1,uVar2,0);
      this_00 = (Integer *)(param_2 + 0x38);
    }
    Integer::Encode(this_00,param_1,uVar2,0);
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cd224c;
  }
  else {
    Algorithm::Algorithm((Algorithm *)&local_70,false);
    local_5c = 0xffffffff;
    local_58 = 0;
    local_50 = 0xffffffffffffffff;
    local_70 = &PTR__BufferedTransformation_01008650;
    ppuStack_68 = &PTR__NullStore_010087e8;
    local_78 = (**(code **)(*(long *)this + 0x78))(this,param_3);
    local_78 = local_78 & 0xffffffff;
    (*(code *)local_70[0x23])(&local_70,param_1,&local_78,&DEFAULT_CHANNEL,1);
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00cd224c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


