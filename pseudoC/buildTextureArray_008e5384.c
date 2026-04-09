// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTextureArray
// Entry Point: 008e5384
// Size: 884 bytes
// Signature: undefined __thiscall buildTextureArray(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::buildTextureArray(IRenderDevice*) */

void __thiscall BaseTerrain::buildTextureArray(BaseTerrain *this,IRenderDevice *param_1)

{
  char **ppcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ResourceManager *pRVar6;
  long lVar7;
  char **__s;
  ITextureObject *pIVar8;
  Texture *this_00;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char **ppcVar12;
  char **ppcVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  bool local_474 [4];
  undefined auStack_470 [1024];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x130) != 0) {
    pRVar6 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar6,*(Resource **)(this + 0x130));
    *(undefined8 *)(this + 0x130) = 0;
  }
  uVar9 = (*(long *)(this + 0x10) - *(long *)(this + 8)) / 0xb0;
  uVar16 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * 0x286bca1b;
  iVar5 = (int)uVar16;
  uVar2 = iVar5 + (int)uVar9;
  lVar7 = EngineManager::getInstance();
  local_474[0] = true;
  if (uVar2 == 0) {
LAB_008e5530:
    memset(auStack_470,0,0x400);
    pIVar8 = (ITextureObject *)
             TextureUtil::createTextureArray
                       (0x10,0x10,0,1,0x400,5,3,auStack_470,false,true,
                        "BaseTerrain diffuse texture array",param_1);
    if (pIVar8 != (ITextureObject *)0x0) goto LAB_008e5580;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 008e56bc to 008e56c7 has its CatchHandler @ 008e56f8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to create terrain diffuse texture array.\n");
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0x1fc);
    __s = (char **)operator_new((ulong)uVar2 << 3);
    memset(__s,0,(ulong)uVar2 << 3);
    if ((int)uVar9 != 0) {
      uVar11 = uVar9 & 0xffffffff;
      ppcVar12 = (char **)(*(long *)(this + 8) + 0x38);
      ppcVar13 = __s;
      do {
        ppcVar1 = ppcVar12 + -2;
        pcVar15 = (char *)((long)ppcVar12 + -0xf);
        pcVar14 = *ppcVar12;
        ppcVar12 = ppcVar12 + 0x16;
        if ((*(byte *)ppcVar1 & 1) != 0) {
          pcVar15 = pcVar14;
        }
        uVar11 = uVar11 - 1;
        *ppcVar13 = pcVar15;
        ppcVar13 = ppcVar13 + 1;
      } while (uVar11 != 0);
    }
    if (iVar5 != 0) {
      uVar16 = uVar16 & 0xffffffff;
      ppcVar12 = (char **)(*(long *)(this + 0x20) + 0x58);
      do {
        ppcVar13 = ppcVar12 + -2;
        pcVar15 = (char *)((long)ppcVar12 + -0xf);
        pcVar14 = *ppcVar12;
        ppcVar12 = ppcVar12 + 0x13;
        if ((*(byte *)ppcVar13 & 1) != 0) {
          pcVar15 = pcVar14;
        }
        uVar16 = uVar16 - 1;
        __s[uVar9 & 0xffffffff] = pcVar15;
        uVar9 = uVar9 + 1;
      } while (uVar16 != 0);
    }
                    /* try { // try from 008e54bc to 008e5527 has its CatchHandler @ 008e5728 */
    pIVar8 = (ITextureObject *)
             TextureUtil::createTextureArray
                       (__s,uVar2,1,uVar3,true,true,"BaseTerrain diffuse texture array",param_1,
                        local_474);
    if (pIVar8 == (ITextureObject *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 008e5670 to 008e567b has its CatchHandler @ 008e5710 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Failed to create terrain diffuse texture array, using black textures instead.\n"
                       );
      operator_delete(__s);
      goto LAB_008e5530;
    }
    operator_delete(__s);
LAB_008e5580:
    this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 008e5590 to 008e55a7 has its CatchHandler @ 008e5724 */
    Texture::Texture(this_00,"TerrainDiffuseTextureArray",2,pIVar8,local_474[0],true);
    *(Texture **)(this + 0x130) = this_00;
    FUN_00f276d0(1,this_00 + 8);
    pRVar6 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::add(pRVar6,*(Resource **)(this + 0x130),(ResourceDesc *)0x0,false);
    if ((*(int *)(lVar7 + 0x210) == 0) ||
       ((uVar9 = createNormalMapTextureArray(this,param_1), (uVar9 & 1) != 0 &&
        ((*(uint *)(lVar7 + 0x210) < 2 ||
         (uVar9 = createHeightMapTextureArray(this,param_1), (uVar9 & 1) != 0)))))) {
      uVar10 = 1;
      goto LAB_008e5630;
    }
  }
  uVar10 = 0;
LAB_008e5630:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


