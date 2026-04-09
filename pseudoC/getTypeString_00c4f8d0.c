// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeString
// Entry Point: 00c4f8d0
// Size: 872 bytes
// Signature: undefined __cdecl getTypeString(IR_LANGUAGE param_1)


/* IR_Type::getTypeString(IR_LANGUAGE) const */

void IR_Type::getTypeString(IR_LANGUAGE param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint in_w1;
  IR_LANGUAGE in_w3;
  IR_LANGUAGE in_w4;
  IR_LANGUAGE in_w6;
  ulong *in_x8;
  byte *pbVar5;
  undefined **ppuVar6;
  byte *__s;
  void *pvVar7;
  char *__s_00;
  ulong uVar8;
  byte local_160 [16];
  void *local_150;
  byte abStack_148 [256];
  long local_48;
  
  puVar3 = (undefined4 *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  switch(*puVar3) {
  case 0:
    uVar1 = puVar3[2];
    if (in_w1 == 0) {
      if (9 < uVar1) goto LAB_00c4fbc0;
      ppuVar6 = &PTR_DAT_00fee6f0;
LAB_00c4fbb8:
      __s_00 = ppuVar6[(int)uVar1];
    }
    else {
      if (in_w1 != 2) {
        if (9 < uVar1) goto LAB_00c4fbc0;
        ppuVar6 = &PTR_DAT_00fee740;
        goto LAB_00c4fbb8;
      }
      if (uVar1 < 10) {
        ppuVar6 = &PTR_DAT_00fee6a0;
        goto LAB_00c4fbb8;
      }
LAB_00c4fbc0:
      __s_00 = "unknown type";
    }
    sVar4 = strlen(__s_00);
    if (0xffffffffffffffef < sVar4) goto LAB_00c4fc2c;
    if (sVar4 < 0x17) {
      pvVar7 = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)sVar4 << 1);
      if (sVar4 != 0) goto LAB_00c4fc14;
    }
    else {
      uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar8);
      in_x8[1] = sVar4;
      in_x8[2] = (ulong)pvVar7;
      *in_x8 = uVar8 | 1;
LAB_00c4fc14:
      memcpy(pvVar7,__s_00,sVar4);
    }
    *(undefined *)((long)pvVar7 + sVar4) = 0;
    break;
  case 1:
    getVectorTypeString((IR_Type *)(ulong)(uint)puVar3[2],puVar3[5],in_w1,in_w3);
    break;
  case 2:
    getMatrixTypeString((IR_Type *)(ulong)(uint)puVar3[2],puVar3[4],puVar3[5],in_w1,in_w4);
    break;
  case 3:
    pbVar5 = *(byte **)(puVar3 + 2);
    __s = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      __s = pbVar5 + 1;
    }
    goto LAB_00c4fb04;
  case 4:
    getTypeString((IR_LANGUAGE)*(undefined8 *)(puVar3 + 2));
    pvVar7 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar7 = local_150;
    }
                    /* try { // try from 00c4f974 to 00c4f987 has its CatchHandler @ 00c4fc40 */
    FUN_00c4ef5c(abStack_148,0x100,"%s[%u]",pvVar7,puVar3[4]);
    goto LAB_00c4fa70;
  case 5:
    getTypeString((IR_LANGUAGE)*(undefined8 *)(puVar3 + 2));
    pvVar7 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar7 = local_150;
    }
                    /* try { // try from 00c4fa1c to 00c4fa2f has its CatchHandler @ 00c4fc3c */
    FUN_00c4ef5c(abStack_148,0x100,&DAT_004fff33,pvVar7);
    goto LAB_00c4fa70;
  case 6:
    getTypeString((IR_LANGUAGE)*(undefined8 *)(puVar3 + 2));
    pvVar7 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar7 = local_150;
    }
                    /* try { // try from 00c4fa5c to 00c4fa6f has its CatchHandler @ 00c4fc38 */
    FUN_00c4ef5c(abStack_148,0x100,&DAT_004cb41c,pvVar7);
LAB_00c4fa70:
    if ((local_160[0] & 1) != 0) {
      operator_delete(local_150);
    }
    sVar4 = strlen((char *)abStack_148);
    if (0xffffffffffffffef < sVar4) {
LAB_00c4fc2c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar4 < 0x17) {
      pvVar7 = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)sVar4 << 1);
      if (sVar4 != 0) goto LAB_00c4facc;
    }
    else {
      uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar8);
      in_x8[1] = sVar4;
      in_x8[2] = (ulong)pvVar7;
      *in_x8 = uVar8 | 1;
LAB_00c4facc:
      __s = abStack_148;
LAB_00c4fb60:
      memcpy(pvVar7,__s,sVar4);
    }
LAB_00c4fb68:
    *(undefined *)((long)pvVar7 + sVar4) = 0;
    break;
  case 7:
    getTextureTypeString
              ((IR_Type *)(ulong)(uint)puVar3[4],(IR_TextureDim)*(undefined8 *)(puVar3 + 2),
               (IR_Type *)(ulong)*(byte *)(puVar3 + 5),*(bool *)((long)puVar3 + 0x15),
               SUB41(puVar3[6],0),in_w1,in_w6);
    break;
  case 8:
    pbVar5 = (byte *)"SamplerState";
    if (puVar3[4] != 0) {
      pbVar5 = (byte *)"SamplerComparisonState";
    }
    __s = (byte *)"sampler";
    if (in_w1 != 1) {
      __s = pbVar5;
    }
LAB_00c4fb04:
    sVar4 = strlen((char *)__s);
    if (0xffffffffffffffef < sVar4) goto LAB_00c4fc2c;
    if (0x16 < sVar4) {
      uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar8);
      in_x8[1] = sVar4;
      in_x8[2] = (ulong)pvVar7;
      *in_x8 = uVar8 | 1;
      goto LAB_00c4fb60;
    }
    pvVar7 = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_00c4fb60;
    goto LAB_00c4fb68;
  default:
    *(undefined2 *)in_x8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


