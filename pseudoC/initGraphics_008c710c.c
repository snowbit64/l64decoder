// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initGraphics
// Entry Point: 008c710c
// Size: 676 bytes
// Signature: undefined __thiscall initGraphics(SplineGeometry * this, IRenderDevice * param_1)


/* SplineGeometry::initGraphics(IRenderDevice*) */

void __thiscall SplineGeometry::initGraphics(SplineGeometry *this,IRenderDevice *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  float *pfVar8;
  IVertexBuffer *pIVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined4 uStack_104;
  char *local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
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
  undefined4 local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  iVar4 = Spline::getNumOfCV();
  iVar5 = Spline::getForm();
  if (iVar5 == 1) {
    iVar4 = iVar4 + 1;
  }
  local_84 = 0;
  local_7c = 1;
  uStack_cc = 0;
  uStack_8c = 0;
  local_94 = 0;
  local_d4 = 0xd00000000;
  uStack_c0 = 0;
  uStack_dc = 0;
  uStack_bc = 8;
  local_e4 = 0x100000000;
  uVar2 = iVar4 << 5 | 1;
  local_b4 = 0;
  uStack_9c = 0;
  local_a4 = 0;
  uStack_ac = 0xf00000000;
  uStack_c8 = 10;
  uStack_c4 = 10;
  local_e8 = 2;
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x128))(param_1,&local_e8);
  iVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
  pvVar7 = operator_new__((ulong)(iVar5 * uVar2 & 0xfffffffc));
  pfVar8 = (float *)operator_new__((ulong)(uVar2 * 3) << 2);
  fVar12 = 0.0;
  uVar10 = 0;
  do {
    (**(code **)(**(long **)(this + 0xd8) + 0x10))
              (fVar12,*(long **)(this + 0xd8),&local_110,&local_f8);
    fVar12 = 1.0 / (float)(ulong)(uint)(iVar4 << 5) + fVar12;
    iVar5 = (int)uVar10;
    pfVar8[uVar10 & 0xffffffff] = (float)local_110;
    uVar10 = uVar10 + 3;
    pfVar8[iVar5 + 1] = local_110._4_4_;
    pfVar8[iVar5 + 2] = local_108;
  } while ((ulong)uVar2 + (ulong)uVar2 * 2 != uVar10);
  IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
            (uVar2,pfVar8,true,(float *)&local_f8,&local_114);
  VertexBufferGeometry::setPositionOffsetAndScale
            ((VertexBufferGeometry *)this,(float *)&local_f8,1.0 / local_114);
  uVar10 = 0;
  do {
    fVar12 = *(float *)((long)(pfVar8 + (uVar10 & 0xffffffff)) + 8);
    uVar11 = *(undefined8 *)(pfVar8 + (uVar10 & 0xffffffff));
    puVar1 = (undefined8 *)((long)pvVar7 + uVar10 * 8);
    uVar10 = uVar10 + 3;
    puVar1[2] = 0xb2ff0000;
    *(int *)(puVar1 + 1) = (int)(local_114 * (fVar12 - local_f0));
    *(undefined4 *)((long)puVar1 + 0xc) = 0x7fff7f;
    *puVar1 = CONCAT44((int)(((float)((ulong)uVar11 >> 0x20) - (float)((ulong)local_f8 >> 0x20)) *
                            local_114),(int)(((float)uVar11 - (float)local_f8) * local_114));
  } while ((ulong)uVar2 * 3 != uVar10);
  operator_delete__(pfVar8);
  iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
  local_108 = (float)(iVar4 * uVar2);
  uStack_104 = 1;
  local_100 = "Spline";
  local_110 = pvVar7;
  uVar11 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pIVar9 = (IVertexBuffer *)(**(code **)(*(long *)param_1 + 0x108))(param_1,uVar11,&local_110);
  operator_delete__(pvVar7);
  VertexBufferGeometry::addVertexBuffer
            ((VertexBufferGeometry *)this,3,pIVar9,(IVertexDeclaration *)plVar6);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


