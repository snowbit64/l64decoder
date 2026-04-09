// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVectorTypeString
// Entry Point: 00c4ed74
// Size: 488 bytes
// Signature: undefined __thiscall getVectorTypeString(IR_Type * this, GsTBasicType param_1, uint param_2, IR_LANGUAGE param_3)


/* IR_Type::getVectorTypeString(GsTBasicType, unsigned int, IR_LANGUAGE) */

void __thiscall
IR_Type::getVectorTypeString(IR_Type *this,GsTBasicType param_1,uint param_2,IR_LANGUAGE param_3)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  ulong *in_x8;
  undefined **ppuVar4;
  undefined *puVar5;
  char *pcVar6;
  ulong uVar7;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (uint)this;
  if (1 < param_1) {
    if (param_2 == 0) {
      if (uVar2 < 10) {
        ppuVar4 = &PTR_DAT_00fee6f0;
        goto LAB_00c4eea4;
      }
LAB_00c4eeac:
      pcVar6 = "unknown type";
    }
    else {
      if (param_2 != 2) {
        if (uVar2 < 10) {
          ppuVar4 = &PTR_DAT_00fee740;
          goto LAB_00c4eea4;
        }
        goto LAB_00c4eeac;
      }
      if (9 < uVar2) goto LAB_00c4eeac;
      ppuVar4 = &PTR_DAT_00fee6a0;
LAB_00c4eea4:
      pcVar6 = ppuVar4[(int)uVar2];
    }
    FUN_00c4ef5c(acStack_148,0x100,&DAT_004de1b5,pcVar6,param_1);
    sVar3 = strlen(acStack_148);
    if (0xffffffffffffffef < sVar3) goto LAB_00c4ef50;
    if (sVar3 < 0x17) {
      puVar5 = (undefined *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)sVar3 << 1);
      if (sVar3 != 0) goto LAB_00c4ef14;
    }
    else {
      uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined *)operator_new(uVar7);
      in_x8[1] = sVar3;
      in_x8[2] = (ulong)puVar5;
      *in_x8 = uVar7 | 1;
LAB_00c4ef14:
      memcpy(puVar5,acStack_148,sVar3);
    }
    puVar5[sVar3] = 0;
    goto LAB_00c4ef28;
  }
  if (param_2 == 0) {
    if (uVar2 < 10) {
      ppuVar4 = &PTR_DAT_00fee6f0;
      goto LAB_00c4ee20;
    }
LAB_00c4ee28:
    pcVar6 = "unknown type";
  }
  else {
    if (param_2 != 2) {
      if (uVar2 < 10) {
        ppuVar4 = &PTR_DAT_00fee740;
        goto LAB_00c4ee20;
      }
      goto LAB_00c4ee28;
    }
    if (9 < uVar2) goto LAB_00c4ee28;
    ppuVar4 = &PTR_DAT_00fee6a0;
LAB_00c4ee20:
    pcVar6 = ppuVar4[(int)uVar2];
  }
  sVar3 = strlen(pcVar6);
  if (0xffffffffffffffef < sVar3) {
LAB_00c4ef50:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    puVar5 = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)sVar3 << 1);
    if (sVar3 != 0) goto LAB_00c4ee7c;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined *)operator_new(uVar7);
    in_x8[1] = sVar3;
    in_x8[2] = (ulong)puVar5;
    *in_x8 = uVar7 | 1;
LAB_00c4ee7c:
    memcpy(puVar5,pcVar6,sVar3);
  }
  puVar5[sVar3] = 0;
LAB_00c4ef28:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


