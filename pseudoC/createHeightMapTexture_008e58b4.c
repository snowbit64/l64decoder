// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHeightMapTexture
// Entry Point: 008e58b4
// Size: 524 bytes
// Signature: undefined __thiscall createHeightMapTexture(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::createHeightMapTexture(IRenderDevice*) */

undefined8 __thiscall BaseTerrain::createHeightMapTexture(BaseTerrain *this,IRenderDevice *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ResourceManager *pRVar5;
  undefined8 uVar6;
  ITextureObject *pIVar7;
  Texture *this_00;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  int local_8c;
  int iStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pRVar5 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar5,*(Resource **)(this + 0x110));
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x120));
  }
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  local_98 = 0;
  uStack_7c = 0;
  local_84 = 0x100000001;
  local_8c = *(int *)(this + 0x90) + -1;
  local_74 = 0x24;
  uStack_5c = 0x3f80000000000000;
  local_64 = 0;
  local_6c = 0x100001004;
  local_54 = 0;
  local_94 = 0xffffffff00000000;
  local_a0 = 0;
  local_70 = 0;
  local_50 = "BaseTerrainHeightMap";
  iStack_88 = local_8c;
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pIVar7 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,uVar6,&local_a0);
  this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e5994 to 008e59ab has its CatchHandler @ 008e5ac0 */
  Texture::Texture(this_00,"BaseTerrainHeightMap",2,pIVar7,false,true);
  *(Texture **)(this + 0x110) = this_00;
  FUN_00f276d0(1,this_00 + 8);
  pRVar5 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar5,*(Resource **)(this + 0x110),(ResourceDesc *)0x0,false);
  uVar3 = 0;
  if (*(uint *)(this + 0x118) != 0) {
    uVar3 = (*(int *)(this + 0x90) - 1U) / *(uint *)(this + 0x118);
  }
  uVar2 = uVar3 * uVar3;
  uVar11 = (ulong)uVar2;
  *(uint *)(this + 0x11c) = uVar3;
  pvVar8 = operator_new__(uVar11);
  *(void **)(this + 0x120) = pvVar8;
  if (uVar2 == 0) goto LAB_008e5a80;
  if (uVar2 < 8) {
    uVar9 = 0;
  }
  else {
    if (uVar2 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = uVar11 & 0xffffffe0;
      do {
        puVar1 = (undefined8 *)((long)pvVar8 + uVar10);
        uVar10 = uVar10 + 0x20;
        puVar1[1] = 0x101010101010101;
        *puVar1 = 0x101010101010101;
        puVar1[3] = 0x101010101010101;
        puVar1[2] = 0x101010101010101;
      } while (uVar10 != uVar9);
      if (uVar9 == uVar11) goto LAB_008e5a80;
      uVar10 = uVar9;
      if ((uVar2 & 0x18) == 0) goto LAB_008e5a70;
    }
    uVar9 = uVar11 & 0xfffffff8;
    do {
      *(undefined8 *)((long)pvVar8 + uVar10) = 0x101010101010101;
      uVar10 = uVar10 + 8;
    } while (uVar10 != uVar9);
    if (uVar9 == uVar11) goto LAB_008e5a80;
  }
LAB_008e5a70:
  do {
    *(undefined *)((long)pvVar8 + uVar9) = 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 != uVar11);
LAB_008e5a80:
  *(uint *)(this + 0x128) = uVar2;
  updateHeightMapTexture(this,param_1);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


