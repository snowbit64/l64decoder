// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImageToBuffer
// Entry Point: 00a91a6c
// Size: 280 bytes
// Signature: undefined __cdecl saveImageToBuffer(ImageDesc * param_1, uchar * * param_2, uint * param_3)


/* GS2DUtil::saveImageToBuffer(ImageDesc const&, unsigned char*&, unsigned int&) */

uint GS2DUtil::saveImageToBuffer(ImageDesc *param_1,uchar **param_2,uint *param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint local_ac;
  uchar *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint auStack_58 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = compressContent(param_1,&local_a8,&local_ac,auStack_58);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = buildGS2DHeader(param_1,local_ac,auStack_58,(GS2DHeader *)&local_a0);
    if ((uVar3 & 1) != 0) {
      *param_3 = local_ac + 0x50;
      puVar5 = (undefined4 *)operator_new__((ulong)(local_ac + 0x50));
      *param_2 = (uchar *)puVar5;
      uVar1 = *(undefined4 *)s_GS2DHeaderID;
      *(undefined8 *)(puVar5 + 4) = uStack_98;
      *(undefined8 *)(puVar5 + 2) = local_a0;
      *(undefined8 *)(puVar5 + 0x10) = uStack_68;
      *(undefined8 *)(puVar5 + 0xe) = uStack_70;
      *(undefined8 *)(puVar5 + 0xc) = uStack_78;
      *(undefined8 *)(puVar5 + 10) = local_80;
      *puVar5 = uVar1;
      puVar5[1] = 6;
      *(undefined8 *)(puVar5 + 0x12) = local_60;
      *(undefined8 *)(puVar5 + 8) = uStack_88;
      *(undefined8 *)(puVar5 + 6) = uStack_90;
      memcpy(puVar5 + 0x14,local_a8,(ulong)local_ac);
    }
    if (local_a8 != (uchar *)0x0) {
      operator_delete__(local_a8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


