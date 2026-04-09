// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSharedRenderArgs
// Entry Point: 00a13720
// Size: 784 bytes
// Signature: undefined __thiscall updateSharedRenderArgs(Renderer * this, Camera * param_1, ITextureObject * param_2)


/* Renderer::updateSharedRenderArgs(Camera*, ITextureObject*) */

void __thiscall
Renderer::updateSharedRenderArgs(Renderer *this,Camera *param_1,ITextureObject *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Renderer RVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  lVar8 = EngineManager::getInstance();
  uVar15 = *(undefined4 *)(lVar8 + 0x198);
  uVar11 = 0;
  if (*(char *)(lVar8 + 0x1e8) != '\0') {
    uVar11 = *(undefined8 *)(this + 0x20);
  }
  uVar3 = *(undefined4 *)(lVar8 + 0x208);
  *(PersistentShadowMap **)(this + 0x68) = (PersistentShadowMap *)(this + 0x1a00);
  uVar16 = *(undefined8 *)(lVar8 + 0x1c0);
  puVar2 = (undefined8 *)(this + 0xd8);
  if (*(long *)(this + 0x28) != 0) {
    puVar2 = (undefined8 *)(*(long *)(this + 0x28) + 0x68);
  }
  *(undefined8 *)(this + 0x120) = uVar11;
  *(ITextureObject **)(this + 0x128) = param_2;
  RVar6 = *(Renderer *)(lVar8 + 0x19c);
  *(undefined4 *)(this + 0x70) = uVar3;
  *(undefined4 *)(this + 0x74) = uVar15;
  uVar11 = *puVar2;
  *(undefined8 *)(this + 0xa4) = uVar16;
  iVar4 = *(int *)(lVar8 + 0x1e4);
  uVar12 = 1;
  uVar15 = *(undefined4 *)(lVar8 + 0x1c8);
  *(undefined8 *)(this + 0x140) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this + 0x130) = uVar11;
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(this + 0xe0);
  iVar5 = *(int *)(lVar8 + 500);
  iVar4 = iVar4 + 3;
  *(undefined4 *)(this + 0xac) = uVar15;
  uVar15 = *(undefined4 *)(lVar8 + 0x20c);
  this[0xc0] = RVar6;
  uVar1 = iVar4 + (iVar5 + 2U >> 2);
  *(undefined4 *)(this + 0x78) = uVar15;
  this[0x5f] = (Renderer)0x1;
  *(int *)(this + 0x60) = iVar4;
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(this + 0x1cd0);
  *(Renderer **)(this + 0x118) = this + 0x1cd8;
  if (uVar1 < 2) {
LAB_00a13810:
    uVar14 = uVar12 - uVar1;
LAB_00a13814:
    if (uVar14 <= 4 - uVar1) {
      uVar13 = 1;
      goto joined_r0x00a13878;
    }
    uVar12 = 2;
    uVar14 = 4 - uVar1;
LAB_00a1389c:
    uVar13 = 2;
  }
  else {
    if (uVar1 == 2) {
      uVar14 = 0;
      uVar12 = 2;
      goto LAB_00a13814;
    }
    if (uVar1 < 4) {
      uVar12 = 3;
      goto LAB_00a13810;
    }
    if (uVar1 == 4) {
      uVar14 = 0;
      uVar12 = 4;
      goto LAB_00a13814;
    }
    uVar13 = 0xffffffff;
    uVar12 = 0xffffffff;
    uVar14 = 0xffffffff;
joined_r0x00a13878:
    if ((uVar1 < 7) && (6 - uVar1 < uVar14)) {
      uVar12 = 3;
      uVar14 = 6 - uVar1;
      goto LAB_00a1389c;
    }
    if ((uVar1 < 9) && (8 - uVar1 < uVar14)) {
      uVar12 = 4;
      uVar14 = 8 - uVar1;
      goto LAB_00a1389c;
    }
  }
  if ((uVar1 < 4) && (3 - uVar1 < uVar14)) {
    uVar12 = 1;
    uVar14 = 3 - uVar1;
  }
  else if ((uVar1 < 7) && (6 - uVar1 < uVar14)) {
    uVar12 = 2;
    uVar14 = 6 - uVar1;
  }
  else if ((uVar1 < 10) && (9 - uVar1 < uVar14)) {
    uVar12 = 3;
    uVar14 = 9 - uVar1;
  }
  else {
    if ((0xc < uVar1) || (uVar14 <= 0xc - uVar1)) goto LAB_00a1392c;
    uVar12 = 4;
    uVar14 = 0xc - uVar1;
  }
  uVar13 = 3;
LAB_00a1392c:
  if ((uVar1 < 5) && (4 - uVar1 < uVar14)) {
    uVar10 = 4;
    uVar9 = 1;
  }
  else if ((uVar1 < 9) && (8 - uVar1 < uVar14)) {
    uVar10 = 4;
    uVar9 = 2;
  }
  else if ((uVar1 < 0xd) && (0xc - uVar1 < uVar14)) {
    uVar10 = 4;
    uVar9 = 3;
  }
  else {
    uVar10 = 4;
    uVar9 = 4;
    if (0x10 < uVar1 || uVar14 <= 0x10 - uVar1) {
      uVar10 = uVar13;
      uVar9 = uVar12;
    }
  }
  uVar11 = PersistentShadowMap::beginFrame
                     ((PersistentShadowMap *)(this + 0x1a00),uVar9,uVar10,
                      *(uint *)(lVar8 + 0x1ec) >> 1,*(float *)(lVar8 + 0x1e0),
                      (SharedRenderArgs *)(this + 0x38),(RenderController *)(this + 0xf20));
  *(undefined8 *)(this + 0xd0) = uVar11;
  HardwareScalability::setShadowQuality
            ((HardwareScalability *)(lVar8 + 0x198),*(float *)(this + 0x1a08));
  if (param_1 == (Camera *)0x0) {
    *(undefined8 *)(this + 0x90) = 0;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x16e);
    if (uVar7 != 0) {
      uVar12 = *(uint *)(this + 0x60);
      uVar1 = (uint)uVar7;
      if (uVar12 < uVar7 || uVar12 == uVar7) {
        uVar1 = uVar12;
      }
      *(uint *)(this + 0x60) = uVar1;
    }
    uVar11 = *(undefined8 *)(param_1 + 0xe8);
    *(Camera **)(this + 0x90) = param_1;
    uVar15 = *(undefined4 *)(param_1 + 0xf0);
    *(undefined8 *)(this + 0x98) = uVar11;
    *(undefined4 *)(this + 0xa0) = uVar15;
  }
  return;
}


