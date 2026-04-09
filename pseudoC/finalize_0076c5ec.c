// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 0076c5ec
// Size: 496 bytes
// Signature: undefined __thiscall finalize(TextureArrayConstructor * this, MethodInvocation * param_1)


/* TextureArrayConstructor::finalize(MethodInvocation*) */

void __thiscall
TextureArrayConstructor::finalize(TextureArrayConstructor *this,MethodInvocation *param_1)

{
  char **ppcVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  MethodInvocation MVar5;
  MethodInvocation MVar6;
  long lVar7;
  IRenderDevice *pIVar8;
  long lVar9;
  char **ppcVar10;
  ITextureObject *pIVar11;
  Texture *this_00;
  ResourceManager *pRVar12;
  undefined8 *this_01;
  ulong uVar13;
  char **ppcVar14;
  char **ppcVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  bool local_6c [4];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  *(undefined4 *)(param_1 + 0x100) = 0;
  lVar9 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  *(undefined4 *)(param_1 + 0x108) = 1;
  if (lVar9 != lVar2) {
    MVar5 = param_1[0x10];
    MVar6 = param_1[0x20];
    uVar18 = (lVar2 - lVar9 >> 3) * -0x5555555555555555;
    RenderDeviceManager::getInstance();
    pIVar8 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
    lVar9 = EngineManager::getInstance();
    uVar3 = *(uint *)(lVar9 + 0x1fc);
    ppcVar10 = (char **)operator_new__((uVar18 & 0xffffffff) << 3);
    if ((uint)uVar18 != 0) {
      uVar13 = uVar18 & 0xffffffff;
      ppcVar14 = (char **)(*(long *)this + 0x10);
      ppcVar15 = ppcVar10;
      do {
        ppcVar1 = ppcVar14 + -2;
        pcVar17 = (char *)((long)ppcVar14 + -0xf);
        pcVar16 = *ppcVar14;
        ppcVar14 = ppcVar14 + 3;
        if ((*(byte *)ppcVar1 & 1) != 0) {
          pcVar17 = pcVar16;
        }
        uVar13 = uVar13 - 1;
        *ppcVar15 = pcVar17;
        ppcVar15 = ppcVar15 + 1;
      } while (uVar13 != 0);
    }
    pIVar11 = (ITextureObject *)
              TextureUtil::createTextureArray
                        (ppcVar10,(uint)uVar18,1,uVar3,MVar5 != (MethodInvocation)0x0,
                         MVar6 != (MethodInvocation)0x0,"ScriptTextureArray",pIVar8,local_6c);
    operator_delete__(ppcVar10);
    if (pIVar11 != (ITextureObject *)0x0) {
      this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 0076c708 to 0076c71f has its CatchHandler @ 0076c7e8 */
      Texture::Texture(this_00,"ScriptTextureArray",2,pIVar11,local_6c[0],true);
      FUN_00f276d0(1,this_00 + 8);
      pRVar12 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::add(pRVar12,(Resource *)this_00,(ResourceDesc *)0x0,false);
      this_01 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 0076c754 to 0076c763 has its CatchHandler @ 0076c7dc */
      Entity::Entity((Entity *)this_01,"ScriptTextureArray",true);
      this_01[4] = this_00;
      *this_01 = &PTR__TextureEntity_00fdb6b8;
      this_01[2] = this_01[2] | 0x100000000000;
      FUN_00f276d0(1,this_00 + 8);
      uVar4 = *(undefined4 *)(this_01 + 3);
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(undefined4 *)(param_1 + 0x100) = uVar4;
      pRVar12 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar12,(Resource *)this_00);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


