// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TyreTrackGeometry
// Entry Point: 008e1d3c
// Size: 1056 bytes
// Signature: undefined __thiscall TyreTrackGeometry(TyreTrackGeometry * this, uint param_1, uint param_2, MultiresTexture * param_3)


/* TyreTrackGeometry::TyreTrackGeometry(unsigned int, unsigned int, MultiresTexture*) */

void __thiscall
TyreTrackGeometry::TyreTrackGeometry
          (TyreTrackGeometry *this,uint param_1,uint param_2,MultiresTexture *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined6 uVar3;
  uint uVar4;
  int iVar5;
  BoundingSphere *this_00;
  long *plVar6;
  undefined2 *puVar7;
  void *pvVar8;
  undefined2 *puVar9;
  int iVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined uVar17;
  undefined2 uVar18;
  undefined uVar20;
  undefined8 uVar19;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  char *local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined8 local_dc;
  char *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar15 = (ulong)param_2;
  local_58 = *(long *)(lVar2 + 0x28);
  Geometry::Geometry((Geometry *)this,"TyreTrackGeometry",false);
  uVar16 = *(ulong *)(this + 0x30) & 0xffffffe3ffffffe3;
  uVar19 = NEON_cnt(uVar15,1);
  uVar18 = NEON_uaddlv(uVar19,1);
  *(undefined ***)this = &PTR__TyreTrackGeometry_00fde5f8;
  *(undefined ***)(this + 0x10) = &PTR__TyreTrackGeometry_00fde648;
  *(ulong *)(this + 0x30) = CONCAT44((int)(uVar16 >> 0x20),(int)*(ulong *)(this + 0x30)) | 0x1000;
  if ((int)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) != 1) {
    uVar4 = param_2 - 1 | param_2 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar14 = uVar4 + 1;
    if (uVar4 == 0xffffffff) {
      uVar14 = 1;
    }
    uVar15 = (ulong)uVar14;
  }
  uVar14 = (uint)uVar15;
  if (0x10000 < uVar14 << 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(uVar16,&LogManager::getInstance()::singletonLogManager),
       iVar5 != 0)) {
                    /* try { // try from 008e2120 to 008e212b has its CatchHandler @ 008e215c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 008e1e0c to 008e1e47 has its CatchHandler @ 008e2190 */
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Number of tyre track segments is too big. Maximum is %u\n",0x4000);
    do {
      uVar14 = (uint)uVar15;
      uVar15 = (ulong)(uVar14 >> 1);
    } while (0x10000 < uVar14 << 2);
  }
  this_00 = (BoundingSphere *)operator_new(0x20);
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
                    /* try { // try from 008e1e54 to 008e1e67 has its CatchHandler @ 008e2178 */
  BoundingSphere::BoundingSphere(this_00,(Vector3 *)&local_c8,1000000.0);
                    /* try { // try from 008e1e68 to 008e1e73 has its CatchHandler @ 008e2174 */
  Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
                    /* try { // try from 008e1e74 to 008e1e7b has its CatchHandler @ 008e2190 */
  uVar4 = IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(0xa3);
  *(uint *)(this + 0x38) = uVar4;
                    /* try { // try from 008e1e84 to 008e1e8b has its CatchHandler @ 008e218c */
  RenderDeviceManager::getInstance();
  plVar6 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  local_c8 = 1;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  local_b4 = 0;
  uStack_9c = 0;
  local_a4 = 0;
  uStack_8c = 0;
  local_94 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
                    /* try { // try from 008e1ebc to 008e1ee3 has its CatchHandler @ 008e2188 */
  IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc
            ((uint *)(this + 0x38),1,true,(VertexDeclarationDesc *)&local_c8);
  uVar19 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_c8);
  *(undefined8 *)(this + 0x58) = uVar19;
                    /* try { // try from 008e1ef4 to 008e1efb has its CatchHandler @ 008e2170 */
  puVar7 = (undefined2 *)operator_new__((ulong)(uVar14 * 6) << 1);
  if (uVar14 != 0) {
    uVar15 = (ulong)(uVar14 - 1);
    puVar9 = puVar7;
    if (uVar14 - 1 != 0) {
      uVar16 = uVar15 + 1;
      uVar15 = uVar16 & 0x1fffffffe;
      uVar11 = 0;
      puVar12 = puVar7 + 6;
      do {
        iVar10 = (int)uVar11;
        iVar5 = iVar10 << 2;
        uVar1 = (ushort)(iVar10 << 2) | 2;
        uVar13 = (ushort)iVar5;
        puVar12[-6] = uVar13;
        uVar11 = uVar11 + 2;
        puVar12[-3] = uVar13;
        puVar12[-5] = uVar1;
        uVar17 = (undefined)iVar5;
        uVar20 = (undefined)((uint)iVar5 >> 8);
        uVar3 = CONCAT15(uVar20,CONCAT14(uVar17,CONCAT13(uVar20,CONCAT12(uVar17,uVar13))));
        puVar12[-4] = (ushort)(iVar10 << 2) | 1;
        puVar12[-2] = (ushort)(iVar10 << 2) | 3;
        puVar12[-1] = uVar1;
        *puVar12 = (ushort)((uint6)uVar3 >> 0x20) | 4;
        *(ulong *)(puVar12 + 1) = CONCAT17(uVar20,CONCAT16(uVar17,uVar3)) | 0x7000400050006;
        puVar12[5] = uVar13 | 6;
        puVar12 = puVar12 + 0xc;
      } while (uVar15 != uVar11);
      puVar9 = puVar7 + uVar15 * 6;
      if (uVar16 == uVar15) goto LAB_008e1fd8;
    }
    do {
      iVar5 = (int)uVar15;
      uVar1 = (ushort)(iVar5 << 2) | 2;
      puVar9[2] = (ushort)(iVar5 << 2) | 1;
      uVar18 = (undefined2)(iVar5 << 2);
      *puVar9 = uVar18;
      puVar9[1] = uVar1;
      uVar15 = (ulong)(iVar5 + 1U);
      puVar9[3] = uVar18;
      puVar9[4] = (ushort)(iVar5 << 2) | 3;
      puVar9[5] = uVar1;
      puVar9 = puVar9 + 6;
    } while (uVar14 != iVar5 + 1U);
  }
LAB_008e1fd8:
  local_e0 = uVar14 * 0xc;
  local_dc = 1;
  local_d0 = "TyreTrack index buffer";
  local_e8 = puVar7;
                    /* try { // try from 008e2008 to 008e2047 has its CatchHandler @ 008e2194 */
  uVar19 = (**(code **)(*plVar6 + 0x138))(plVar6);
  uVar19 = (**(code **)(*plVar6 + 0x110))(plVar6,uVar19,&local_e8);
  *(undefined8 *)(this + 0xa0) = uVar19;
  operator_delete__(puVar7);
  *(uint *)(this + 0x60) = param_1;
  pvVar8 = operator_new__((ulong)param_1 << 3);
  *(void **)(this + 0x68) = pvVar8;
  memset(pvVar8,0,(ulong)param_1 << 3);
  local_100 = 0;
  uVar15 = (ulong)(uVar14 << 2) * 0x24;
  local_f8 = (undefined4)uVar15;
  uStack_f4 = 4;
  local_f0 = "TyreTrack vertex buffer";
                    /* try { // try from 008e2084 to 008e20cf has its CatchHandler @ 008e2198 */
  uVar19 = (**(code **)(*plVar6 + 0x138))(plVar6);
  uVar19 = (**(code **)(*plVar6 + 0x108))(plVar6,uVar19,&local_100);
  *(undefined8 *)(this + 0x78) = uVar19;
  this[0x70] = (TyreTrackGeometry)0x0;
  pvVar8 = operator_new__(uVar15);
  *(void **)(this + 0x98) = pvVar8;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(uint *)(this + 0x88) = uVar14;
  pvVar8 = operator_new__((ulong)uVar14 << 3);
  *(void **)(this + 0x80) = pvVar8;
  memset(pvVar8,0,(ulong)uVar14 << 3);
  *(MultiresTexture **)(this + 0xa8) = param_3;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


