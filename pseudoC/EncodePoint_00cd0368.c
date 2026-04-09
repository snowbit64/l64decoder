// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodePoint
// Entry Point: 00cd0368
// Size: 488 bytes
// Signature: undefined __thiscall EncodePoint(EC2N * this, BufferedTransformation * param_1, EC2NPoint * param_2, bool param_3)


/* CryptoPP::EC2N::EncodePoint(CryptoPP::BufferedTransformation&, CryptoPP::EC2NPoint const&, bool)
   const */

void __thiscall
CryptoPP::EC2N::EncodePoint
          (EC2N *this,BufferedTransformation *param_1,EC2NPoint *param_2,bool param_3)

{
  PolynomialMod2 *this_00;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined uVar4;
  ulong local_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  undefined4 local_5c;
  undefined local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[0x48] == (EC2NPoint)0x0) {
    if (param_3) {
      this_00 = (PolynomialMod2 *)(param_2 + 8);
      uVar2 = PolynomialMod2::operator!(this_00);
      if ((uVar2 & 1) == 0) {
        lVar3 = (**(code **)(**(long **)(this + 0x10) + 0x98))
                          (*(long **)(this + 0x10),param_2 + 0x28,this_00);
        uVar4 = 2;
        if ((*(long *)(lVar3 + 0x10) != 0) && (uVar4 = 2, (**(byte **)(lVar3 + 0x18) & 1) != 0)) {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
      local_70 = (undefined **)CONCAT71(local_70._1_7_,uVar4);
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_70,1,0,1);
      PolynomialMod2::Encode
                (this_00,param_1,(ulong)*(uint *)(*(long *)(this + 0x10) + 0x90) + 7 >> 3);
      if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00cd054c:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      local_70 = (undefined **)CONCAT71(local_70._1_7_,4);
      uVar2 = (ulong)*(uint *)(*(long *)(this + 0x10) + 0x90) + 7 >> 3;
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_70,1,0,1);
      PolynomialMod2::Encode((PolynomialMod2 *)(param_2 + 8),param_1,uVar2);
      PolynomialMod2::Encode((PolynomialMod2 *)(param_2 + 0x28),param_1,uVar2);
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cd054c;
    }
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
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cd054c;
  }
  return;
}


