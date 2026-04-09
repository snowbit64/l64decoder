// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeSplitMeshAttachment
// Entry Point: 0091ea30
// Size: 748 bytes
// Signature: undefined __cdecl serializeSplitMeshAttachment(char * param_1, uint param_2, vector * param_3, IndexedTriangleSet * param_4, vector * param_5, uchar * * param_6, uint * param_7)


/* SerializationHelper::serializeSplitMeshAttachment(char const*, unsigned int,
   std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> > const&,
   IndexedTriangleSet*, std::__ndk1::vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,
   std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData> > const&, unsigned
   char*&, unsigned int&) */

undefined8
SerializationHelper::serializeSplitMeshAttachment
          (char *param_1,uint param_2,vector *param_3,IndexedTriangleSet *param_4,vector *param_5,
          uchar **param_6,uint *param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  size_t sVar9;
  int *__s;
  ushort *puVar10;
  undefined4 *this;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar16 = *(long *)param_3;
  lVar4 = *(long *)(param_3 + 8);
  *param_7 = 0;
  uVar15 = lVar4 - lVar16 >> 2;
  sVar9 = strlen(param_1);
  *param_7 = (int)sVar9 + 0xbU & 0xfffffffc;
  iVar8 = getSerializedIndexedTriangleSetSize(param_4);
  uVar2 = (uint)uVar15 & 0xffff;
  iVar8 = iVar8 + *param_7 + (uint)(ushort)uVar15 * 2;
  iVar3 = iVar8 + 4;
  if ((*(int *)(param_3 + 8) - *(int *)param_3 & 4U) != 0) {
    iVar3 = iVar8 + 2;
  }
  uVar5 = iVar3 + uVar2 * 0x34;
  *param_7 = uVar5;
  __s = (int *)operator_new__((ulong)uVar5);
  *param_6 = (uchar *)__s;
  memset(__s,0,(ulong)uVar5);
  sVar9 = strlen(param_1);
  iVar8 = (int)sVar9;
  *__s = iVar8;
  memcpy(__s + 1,param_1,sVar9 & 0xffffffff);
  puVar1 = (uint *)((long)(__s + 1) +
                   (ulong)((iVar8 + 3U & 0xfffffffc) - iVar8) + (sVar9 & 0xffffffff));
  *puVar1 = param_2;
  puVar10 = (ushort *)serializeIndexedTriangleSet(param_4,(uchar *)(puVar1 + 1));
  *puVar10 = (ushort)uVar15;
  if ((uVar15 & 0xffff) != 0) {
    lVar13 = 0;
    do {
      lVar11 = lVar13;
      *(undefined2 *)((long)puVar10 + lVar11 + 2) = *(undefined2 *)(*(long *)param_3 + lVar11 * 2);
      lVar13 = lVar11 + 2;
    } while ((ulong)uVar2 * 2 - (lVar11 + 2) != 0);
    if ((uVar15 & 0xffff) != 0) {
      lVar13 = 0;
      lVar7 = lVar11 + 6;
      if ((lVar4 - lVar16 & 4U) != 0) {
        lVar7 = lVar11 + 4;
      }
      puVar14 = (undefined8 *)((long)puVar10 + lVar7);
      do {
        lVar16 = *(long *)param_5;
        uVar15 = (ulong)*(ushort *)(*(long *)param_3 + lVar13 + 2);
        this = (undefined4 *)(lVar16 + uVar15 * 0x50);
        local_70 = this[0xe];
        uVar17 = NEON_fmadd(*this,*this,(float)this[1] * (float)this[1]);
        local_98 = (float)NEON_fmadd(this[2],this[2],uVar17);
        local_98 = SQRT(local_98);
        uVar17 = NEON_fmadd(this[4],this[4],(float)this[5] * (float)this[5]);
        fStack_94 = (float)NEON_fmadd(this[6],this[6],uVar17);
        fStack_94 = SQRT(fStack_94);
        uVar17 = NEON_fmadd(this[8],this[8],(float)this[9] * (float)this[9]);
        local_90 = (float)NEON_fmadd(this[10],this[10],uVar17);
        local_78 = *(undefined8 *)(this + 0xc);
        local_90 = SQRT(local_90);
        if ((local_98 < 1.00001) && (0.99999 < local_98)) {
          local_98 = 1.0;
        }
        if ((fStack_94 < 1.00001) && (0.99999 < fStack_94)) {
          fStack_94 = 1.0;
        }
        if ((local_90 < 1.00001) && (0.99999 < local_90)) {
          local_90 = 1.0;
        }
        Matrix4x4::getEulerAngles((Matrix4x4 *)this,(Vector3 *)&local_88,(Vector3 *)&local_98);
        lVar13 = lVar13 + 4;
        *(undefined4 *)(puVar14 + 1) = local_80;
        *puVar14 = local_88;
        lVar16 = lVar16 + uVar15 * 0x50;
        puVar14[3] = local_78;
        *(undefined4 *)(puVar14 + 4) = local_70;
        *(float *)((long)puVar14 + 0x14) = local_90;
        *(ulong *)((long)puVar14 + 0xc) = CONCAT44(fStack_94,local_98);
        uVar12 = *(undefined8 *)(lVar16 + 0x40);
        *(undefined4 *)((long)puVar14 + 0x2c) = *(undefined4 *)(lVar16 + 0x48);
        *(undefined8 *)((long)puVar14 + 0x24) = uVar12;
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(lVar16 + 0x4c);
        puVar14 = (undefined8 *)((long)puVar14 + 0x34);
      } while ((ulong)uVar2 * 4 - lVar13 != 0);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


