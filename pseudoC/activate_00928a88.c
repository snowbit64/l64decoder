// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00928a88
// Size: 1028 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* DestructionGeometryShared::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

undefined8
DestructionGeometryShared::activate
          (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  float *pfVar11;
  void *pvVar12;
  ulong uVar13;
  void *__dest;
  DestructionChunk *this;
  void *local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  char *local_108;
  void *local_100;
  int local_f8;
  undefined4 uStack_f4;
  char *local_f0;
  float local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_e0 = 1;
  uStack_d4 = 0;
  local_dc = 0;
  uStack_a4 = 0;
  local_ac = 0;
  uStack_94 = 0;
  local_9c = 0;
  uStack_84 = 0;
  local_8c = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_c4 = 0;
  local_cc = 0;
  uStack_b4 = 0;
  local_bc = 0;
  IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc
            ((uint *)(param_1 + 0x20),1,false,(VertexDeclarationDesc *)&local_e0);
  uVar10 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_e0);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  VertexDeclarationDesc::getMainVertexAttributeByteOffsets
            ((VertexDeclarationDesc *)&local_e0,(uint *)(param_1 + 100),(uint *)(param_1 + 0x68),
             (uint *)(param_1 + 0x6c));
  uVar3 = TriangleSet::getNumVertices();
  iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
  posix_memalign(&local_120,0x10,(ulong)(iVar4 * uVar3 + 0xf));
  *(void **)(param_1 + 0x50) = local_120;
  pfVar11 = (float *)TriangleSet::getPositions();
  IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
            (uVar3,pfVar11,false,(float *)(param_1 + 0x78),&local_e4);
  *(float *)(param_1 + 0x84) = 1.0 / local_e4;
  IndexedTriangleSetGeometryUtil::fillVertexBuffer
            (*(IndexedTriangleSet **)(param_1 + 0x70),*(uchar **)(param_1 + 0x50),
             *(uint *)(param_1 + 0x20),false,(float *)(param_1 + 0x78),local_e4,0);
  iVar4 = DestructionChunk::getFirstVertex();
  iVar5 = DestructionChunk::getNumVertices();
  local_f8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
  local_f8 = local_f8 * iVar5;
  lVar1 = *(long *)(param_1 + 0x50);
  uStack_f4 = 1;
  iVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
  local_100 = (void *)(lVar1 + (ulong)(uint)(iVar5 * iVar4));
  local_f0 = "DestructionGeometryShared";
  uVar10 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar10 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar10,&local_100);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  local_110 = 0;
  local_120 = (void *)DestructionChunk::getIndices();
  local_118 = DestructionChunk::getNumIndices();
  local_118 = local_118 << 1;
  local_108 = "DestructionGeometryShared";
  uStack_114 = 1;
  uVar10 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar10 = (**(code **)(*(long *)param_2 + 0x110))(param_2,uVar10,&local_120);
  local_138 = (void *)0x0;
  local_130 = (void *)0x0;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  local_128 = 0;
                    /* try { // try from 00928cac to 00928cbf has its CatchHandler @ 00928e8c */
  getLevelChunks((DestructionGeometryShared *)param_1,*(uint *)(param_1 + 0x40),0,
                 (vector *)&local_138,0);
  if (local_130 == local_138) {
    iVar4 = 0;
  }
  else {
    uVar13 = 0;
    iVar4 = 0;
    do {
                    /* try { // try from 00928ce0 to 00928ce3 has its CatchHandler @ 00928e9c */
      iVar5 = DestructionChunk::getNumVertices();
      iVar4 = iVar5 + iVar4;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)((long)local_130 - (long)local_138 >> 2));
  }
                    /* try { // try from 00928d14 to 00928d27 has its CatchHandler @ 00928e90 */
  iVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
  pvVar12 = operator_new__((ulong)(uint)(iVar5 * iVar4));
  if (local_130 != local_138) {
    uVar13 = 0;
    iVar5 = 0;
    __dest = pvVar12;
    do {
      this = *(DestructionChunk **)
              (*(long *)(param_1 + 0x58) + (ulong)*(uint *)((long)local_138 + uVar13 * 4) * 8);
                    /* try { // try from 00928d4c to 00928d53 has its CatchHandler @ 00928e98 */
      iVar6 = DestructionChunk::getFirstVertex();
                    /* try { // try from 00928d58 to 00928d6f has its CatchHandler @ 00928ea4 */
      iVar7 = DestructionChunk::getNumVertices();
      DestructionChunk::setStartLevelIndexOffset(this,iVar5 - iVar6);
                    /* try { // try from 00928d7c to 00928d9b has its CatchHandler @ 00928ea0 */
      iVar8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
      lVar1 = *(long *)(param_1 + 0x50);
      iVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
      memcpy(__dest,(void *)(lVar1 + (ulong)(uint)(iVar9 * iVar6)),(ulong)(uint)(iVar8 * iVar7));
      __dest = (void *)((long)__dest + (ulong)(uint)(iVar8 * iVar7));
      iVar5 = iVar7 + iVar5;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)((long)local_130 - (long)local_138 >> 2));
  }
                    /* try { // try from 00928ddc to 00928e2b has its CatchHandler @ 00928e94 */
  local_f8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))(*(long **)(param_1 + 0x48),0);
  local_f8 = local_f8 * iVar4;
  uStack_f4 = 1;
  local_f0 = "DestructionGeometryStartLevel";
  local_100 = pvVar12;
  uVar10 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar10 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar10,&local_100);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  operator_delete__(pvVar12);
  *(undefined4 *)(param_1 + 0x18) = 3;
  if (local_138 != (void *)0x0) {
    local_130 = local_138;
    operator_delete(local_138);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


