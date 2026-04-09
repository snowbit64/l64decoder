// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImageToBuffer
// Entry Point: 00a7bb18
// Size: 424 bytes
// Signature: undefined __cdecl saveImageToBuffer(ImageDesc * param_1, uchar * * param_2, uint * param_3)


/* DDSUtil::saveImageToBuffer(ImageDesc const&, unsigned char*&, unsigned int&) */

uint DDSUtil::saveImageToBuffer(ImageDesc *param_1,uchar **param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uchar *__dest;
  ulong uVar7;
  bool local_114 [4];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_114[0] = false;
  uVar5 = buildDDSHeader(param_1,(DDSHeader *)&local_f0,(DDSHeaderDX10 *)&local_110,local_114);
  if ((uVar5 & 1) != 0) {
    local_f4 = 0;
    local_f8 = 0x20534444;
    uVar6 = __strlen_chk(&local_f8,5);
    uVar6 = uVar6 & 0xffffffff;
    uVar7 = uVar6 + 0x7c;
    uVar1 = *(int *)(param_1 + 0x20) + (int)uVar7;
    *param_3 = uVar1;
    if (local_114[0] == false) {
      __dest = (uchar *)operator_new__((ulong)uVar1);
      *param_2 = __dest;
      memcpy(__dest,&local_f8,uVar6);
      puVar2 = (undefined8 *)(__dest + uVar6);
      puVar2[9] = uStack_a8;
      puVar2[8] = local_b0;
      puVar2[0xb] = uStack_98;
      puVar2[10] = uStack_a0;
      puVar2[0xd] = CONCAT44(local_84,uStack_88);
      puVar2[0xc] = uStack_90;
      *(undefined8 *)((long)puVar2 + 0x74) = uStack_7c;
      *(ulong *)((long)puVar2 + 0x6c) = CONCAT44(uStack_80,local_84);
      puVar2[1] = uStack_e8;
      *puVar2 = local_f0;
      puVar2[3] = uStack_d8;
      puVar2[2] = uStack_e0;
      puVar2[5] = uStack_c8;
      puVar2[4] = local_d0;
      puVar2[7] = uStack_b8;
      puVar2[6] = uStack_c0;
    }
    else {
      *param_3 = uVar1 + 0x14;
      __dest = (uchar *)operator_new__((ulong)(uVar1 + 0x14));
      *param_2 = __dest;
      memcpy(__dest,&local_f8,uVar6);
      puVar2 = (undefined8 *)(__dest + uVar6);
      puVar3 = (undefined8 *)(__dest + (uVar7 & 0xffffffff));
      uVar7 = (uVar7 & 0xffffffff) + 0x14;
      puVar2[5] = uStack_c8;
      puVar2[4] = local_d0;
      puVar2[7] = uStack_b8;
      puVar2[6] = uStack_c0;
      puVar2[1] = uStack_e8;
      *puVar2 = local_f0;
      puVar2[3] = uStack_d8;
      puVar2[2] = uStack_e0;
      *(undefined8 *)((long)puVar2 + 0x74) = uStack_7c;
      *(ulong *)((long)puVar2 + 0x6c) = CONCAT44(uStack_80,local_84);
      puVar2[9] = uStack_a8;
      puVar2[8] = local_b0;
      puVar2[0xb] = uStack_98;
      puVar2[10] = uStack_a0;
      puVar2[0xd] = CONCAT44(local_84,uStack_88);
      puVar2[0xc] = uStack_90;
      puVar3[1] = uStack_108;
      *puVar3 = local_110;
      *(undefined4 *)(puVar3 + 2) = local_100;
    }
    memcpy(__dest + (uVar7 & 0xffffffff),*(void **)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x20)
          );
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


