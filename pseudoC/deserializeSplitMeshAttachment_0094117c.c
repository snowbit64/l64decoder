// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeSplitMeshAttachment
// Entry Point: 0094117c
// Size: 904 bytes
// Signature: undefined __cdecl deserializeSplitMeshAttachment(basic_string * param_1, uint * param_2, vector * param_3, IndexedTriangleSet * param_4, vector * param_5, uint param_6, uchar * param_7)


/* SerializationHelper::deserializeSplitMeshAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int&,
   std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> >&, IndexedTriangleSet*,
   std::__ndk1::vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,
   std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData> >&, unsigned int,
   unsigned char*) */

void SerializationHelper::deserializeSplitMeshAttachment
               (basic_string *param_1,uint *param_2,vector *param_3,IndexedTriangleSet *param_4,
               vector *param_5,uint param_6,uchar *param_7)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uchar *puVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  puVar12 = param_7 + 4;
  iVar3 = *(int *)param_7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1,(ulong)puVar12);
  *param_2 = *(uint *)(puVar12 + ((ulong)(iVar3 + 3) & 0xfffffffc));
  pcVar8 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar8 = (char *)((long)param_1 + 1);
  }
  puVar6 = (undefined8 *)
           deserializeIndexedTriangleSetData
                     ((uchar *)((long)(puVar12 + ((ulong)(iVar3 + 3) & 0xfffffffc)) + 4),param_4,
                      pcVar8,param_6);
  uVar4 = *(ushort *)puVar6;
  uVar13 = (ulong)uVar4;
  uVar9 = *(long *)(param_3 + 8) - *(long *)param_3 >> 2;
  if (uVar9 < uVar13) {
    std::__ndk1::
    vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
    ::__append((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                *)param_3,uVar13 - uVar9);
  }
  else if (uVar13 < uVar9) {
    *(ulong *)(param_3 + 8) = *(long *)param_3 + uVar13 * 4;
  }
  puVar7 = (undefined8 *)((long)puVar6 + 2);
  if (uVar4 != 0) {
    uVar9 = 0;
    lVar11 = *(long *)param_3;
    lVar10 = 2;
    do {
      puVar6 = puVar7;
      puVar7 = (undefined8 *)((long)puVar6 + 2);
      *(ushort *)(lVar11 + lVar10 + -2) = *(ushort *)puVar6;
      lVar11 = *(long *)param_3;
      *(short *)(lVar11 + lVar10) = (short)uVar9;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while (uVar13 != uVar9);
  }
  puVar6 = (undefined8 *)((long)puVar6 + 4);
  if ((uVar4 & 1) != 0) {
    puVar6 = puVar7;
  }
  lVar10 = *(long *)(param_5 + 8) - *(long *)param_5 >> 4;
  uVar9 = lVar10 * -0x3333333333333333;
  if (uVar13 <= uVar9) {
    if (uVar13 <= uVar9 && uVar9 - uVar13 != 0) {
      *(ulong *)(param_5 + 8) = *(long *)param_5 + uVar13 * 0x50;
    }
  }
  else {
    std::__ndk1::
    vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
    ::__append((vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
                *)param_5,uVar13 + lVar10 * 0x3333333333333333);
  }
  if (uVar4 != 0) {
    lVar10 = 0;
    do {
      local_b8 = *puVar6;
      local_b0 = *(float *)(puVar6 + 1);
      local_c8 = *(undefined8 *)((long)puVar6 + 0xc);
      local_c0 = *(float *)((long)puVar6 + 0x14);
      uVar15 = puVar6[3];
      fVar2 = *(float *)(puVar6 + 4);
      local_d8 = uVar15;
      local_d0 = fVar2;
      sincosf(local_b0,&fStack_ec,&local_f0);
      fVar18 = local_f0;
      uVar28 = NEON_fmadd(fStack_ec,0,local_f0);
      fVar27 = fStack_ec * -0.0;
      fVar19 = -fStack_ec;
      fVar21 = (float)NEON_fnmsub(local_f0,0,fStack_ec);
      fVar24 = fStack_ec + local_f0 * 0.0;
      uVar25 = NEON_fmadd(fStack_ec,0,local_f0 * 0.0);
      fVar14 = (float)NEON_fmadd(local_f0,0,fVar27);
      fVar16 = local_f0 + fVar27;
      sincosf(local_b8._4_4_,&fStack_dc,&local_e0);
      fVar20 = fStack_dc * -0.0;
      fVar17 = local_e0 * 0.0;
      fVar23 = (float)NEON_fnmsub(uVar25,local_e0,fStack_dc);
      uVar31 = NEON_fmadd(uVar25,fStack_dc,local_e0);
      fVar22 = (float)NEON_fmadd(uVar28,local_e0,fVar20);
      uVar30 = NEON_fmadd(uVar28,fStack_dc,fVar17);
      uVar29 = NEON_fmadd(fVar24,fStack_dc,fVar17);
      fVar24 = (float)NEON_fmadd(fVar24,local_e0,fVar20);
      uVar28 = NEON_fmadd(uVar25,fStack_dc,fVar17);
      fVar26 = (float)NEON_fmadd(uVar25,local_e0,fVar20);
      sincosf((float)local_b8,&fStack_e4,&local_e8);
      fVar20 = (float)NEON_fnmadd(fVar18,0,-fVar27);
      fVar18 = (float)NEON_fnmadd(fVar18,0,-fVar19);
      fVar19 = (float)NEON_fmadd(uVar30,fStack_e4,fVar21 * local_e8);
      pfVar1 = (float *)(*(long *)param_5 + lVar10);
      fVar21 = (float)NEON_fmadd(uVar29,fStack_e4,fVar16 * local_e8);
      fVar27 = (float)NEON_fmadd(uVar31,local_e8,fStack_e4 * fVar20);
      fVar17 = (float)NEON_fmadd(uVar30,local_e8,fStack_e4 * fVar18);
      fVar16 = (float)NEON_fmadd(uVar29,local_e8,fStack_e4 * -fVar16);
      *pfVar1 = (float)local_c8 * fVar22;
      fVar22 = (float)NEON_fmadd(uVar31,fStack_e4,fVar14 * local_e8);
      fVar18 = (float)NEON_fmadd(uVar28,local_e8,fStack_e4 * fVar20);
      fVar14 = (float)NEON_fmadd(uVar28,fStack_e4,fVar14 * local_e8);
      pfVar1[4] = local_c8._4_4_ * fVar19;
      pfVar1[0xb] = fVar18;
      pfVar1[1] = (float)local_c8 * fVar24;
      pfVar1[2] = (float)local_c8 * fVar23;
      pfVar1[3] = fVar26;
      pfVar1[5] = local_c8._4_4_ * fVar21;
      pfVar1[6] = local_c8._4_4_ * fVar22;
      pfVar1[7] = fVar14;
      pfVar1[8] = fVar17 * local_c0;
      pfVar1[9] = fVar16 * local_c0;
      pfVar1[10] = fVar27 * local_c0;
      *(undefined8 *)(pfVar1 + 0xc) = uVar15;
      pfVar1[0xe] = fVar2;
      pfVar1[0xf] = 1.0;
      lVar11 = *(long *)param_5 + lVar10;
      *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)((long)puVar6 + 0x24);
      *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(puVar6 + 5);
      *(undefined4 *)(lVar11 + 0x48) = *(undefined4 *)((long)puVar6 + 0x2c);
      puVar7 = puVar6 + 6;
      puVar6 = (undefined8 *)((long)puVar6 + 0x34);
      lVar11 = *(long *)param_5 + lVar10;
      lVar10 = lVar10 + 0x50;
      *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)puVar7;
    } while (uVar13 * 0x50 - lVar10 != 0);
  }
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


