// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodNormalMap
// Entry Point: 008e5748
// Size: 344 bytes
// Signature: undefined __thiscall createLodNormalMap(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::createLodNormalMap(IRenderDevice*) */

undefined8 __thiscall BaseTerrain::createLodNormalMap(BaseTerrain *this,IRenderDevice *param_1)

{
  long lVar1;
  ResourceManager *pRVar2;
  undefined8 uVar3;
  ITextureObject *pIVar4;
  Texture *this_00;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  int local_8c;
  int iStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pRVar2 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar2,*(Resource **)(this + 0x100));
  local_74 = 2;
  *(undefined8 *)(this + 0x100) = 0;
  uStack_7c = 0;
  local_84 = 0x100000001;
  local_8c = *(int *)(this + 0x90) + -1;
  local_98 = 0;
  uStack_5c = 0x3f80000000000000;
  local_64 = 0;
  local_6c = 4;
  if (s_allowTerrainHeightEditing == '\0') {
    local_6c = 1;
  }
  local_54 = 0;
  local_70 = 0;
  uStack_68 = 1;
  local_a0 = *(undefined8 *)(this + 0xe0);
  local_94 = 0xffffffff00000000;
  local_50 = "BaseTerrainLodNormalMap";
  iStack_88 = local_8c;
  uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pIVar4 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,uVar3,&local_a0);
  this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e5830 to 008e5847 has its CatchHandler @ 008e58a0 */
  Texture::Texture(this_00,"BaseTerrainLodNormalMap",2,pIVar4,false,true);
  *(Texture **)(this + 0x100) = this_00;
  FUN_00f276d0(1,this_00 + 8);
  this[0x108] = (BaseTerrain)0x0;
  pRVar2 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar2,*(Resource **)(this + 0x100),(ResourceDesc *)0x0,false);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


