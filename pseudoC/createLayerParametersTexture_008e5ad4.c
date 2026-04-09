// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLayerParametersTexture
// Entry Point: 008e5ad4
// Size: 632 bytes
// Signature: undefined __thiscall createLayerParametersTexture(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::createLayerParametersTexture(IRenderDevice*) */

void __thiscall BaseTerrain::createLayerParametersTexture(BaseTerrain *this,IRenderDevice *param_1)

{
  long lVar1;
  long lVar2;
  ResourceManager *pRVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ITextureObject *pIVar6;
  Texture *this_00;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined4 *local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  int local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar3,*(Resource **)(this + 0xf8));
  lVar1 = *(long *)(this + 0x20);
  lVar10 = *(long *)(this + 8);
  *(undefined8 *)(this + 0xf8) = 0;
  local_c0 = (undefined4 *)0x0;
  lVar12 = *(long *)(this + 0x28) - lVar1;
  lVar14 = *(long *)(this + 0x10) - lVar10;
  local_a4 = 0x100000001;
  uVar13 = (lVar14 >> 4) * 0x2e8ba2e8ba2e8ba3;
  uVar11 = (lVar12 >> 3) * -0x79435e50d79435e5;
  local_b8 = 0;
  local_ac = (int)uVar11 + (int)uVar13;
  local_9c = 0;
  local_90 = 0;
  uStack_a8 = 1;
  uStack_7c = 0x3f80000000000000;
  local_84 = 0;
  local_74 = 0;
  local_8c = 0x100000001;
  local_98 = 0x1b00000004;
  local_b4 = 0xffffffff00000000;
  puVar4 = (undefined4 *)operator_new__((ulong)(uint)(local_ac * 4) << 2);
  puVar7 = puVar4;
  if (lVar14 != 0) {
    uVar8 = 0;
    puVar9 = puVar4;
    do {
      lVar14 = lVar10 + uVar8 * 0xb0;
      uVar8 = (ulong)((int)uVar8 + 1);
      *puVar9 = *(undefined4 *)(lVar14 + 4);
      fVar15 = 1.0 - *(float *)(lVar14 + 0x88);
      if (fVar15 <= 0.001) {
        fVar15 = 0.001;
      }
      puVar9[1] = fVar15;
      puVar9[2] = *(undefined4 *)(lVar14 + 8);
      puVar7 = puVar9 + 4;
      puVar9[3] = *(undefined4 *)(lVar14 + 0xc);
      puVar9 = puVar7;
    } while (uVar8 <= uVar13 && uVar13 - uVar8 != 0);
  }
  if (lVar12 != 0) {
    uVar13 = 0;
    do {
      lVar10 = lVar1 + uVar13 * 0x98;
      uVar13 = (ulong)((int)uVar13 + 1);
      *puVar7 = *(undefined4 *)(lVar10 + 0x20);
      fVar15 = 1.0 - *(float *)(lVar10 + 0x90);
      if (fVar15 <= 0.001) {
        fVar15 = 0.001;
      }
      puVar7[1] = fVar15;
      puVar7[2] = *(undefined4 *)(lVar10 + 0x24);
      puVar7[3] = *(undefined4 *)(lVar10 + 0x28);
      puVar7 = puVar7 + 4;
    } while (uVar13 <= uVar11 && uVar11 - uVar13 != 0);
  }
  local_70 = "BaseTerrainLayerParameters";
  local_c0 = puVar4;
  uVar5 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pIVar6 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,uVar5,&local_c0);
  operator_delete__(puVar4);
  if (pIVar6 != (ITextureObject *)0x0) {
    this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e5cd0 to 008e5ceb has its CatchHandler @ 008e5d4c */
    Texture::Texture(this_00,"BaseTerrainLayerParameters",2,pIVar6,true,true);
    *(Texture **)(this + 0xf8) = this_00;
    FUN_00f276d0(1,this_00 + 8);
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::add(pRVar3,*(Resource **)(this + 0xf8),(ResourceDesc *)0x0,false);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pIVar6 != (ITextureObject *)0x0);
  }
  return;
}


