// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadStartupScript
// Entry Point: 006dbf18
// Size: 216 bytes
// Signature: undefined loadStartupScript(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::loadStartupScript() */

void EngineApplication::loadStartupScript(void)

{
  uint uVar1;
  long lVar2;
  ResourceManager *this;
  uint uVar3;
  long lVar4;
  bool abStack_44 [4];
  undefined8 local_40;
  undefined7 uStack_38;
  undefined uStack_31;
  undefined7 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uStack_38 = 0x4fd3cf0e7ae7d3;
  local_40 = 0x418f93296bfac064;
  uStack_31 = 0xc0;
  uStack_30 = 0xa14389d05464e7;
  lVar4 = 1;
  do {
    uVar3 = (uint)lVar4;
    uVar1 = (uVar3 & 0xff) * 0x25 >> 8;
    *(byte *)((long)&local_40 + lVar4) =
         (&UNK_00516bcc)[(ulong)(uVar3 + (uVar1 + ((uVar3 - uVar1 & 0xfe) >> 1) >> 2) * -7) & 0xff]
         ^ *(byte *)((long)&local_40 + lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x17);
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::getStaticDelete(this,(char *)&local_40,0,(ResourceDesc *)0x0,1,true,abStack_44);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


