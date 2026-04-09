// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSafeMemoryBudget
// Entry Point: 009665e8
// Size: 384 bytes
// Signature: undefined __thiscall getSafeMemoryBudget(TextureStreamingManager * this, uint param_1, bool * param_2)


/* TextureStreamingManager::getSafeMemoryBudget(unsigned int, bool&) const */

void __thiscall
TextureStreamingManager::getSafeMemoryBudget
          (TextureStreamingManager *this,uint param_1,bool *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  RenderDeviceManager::getInstance();
  plVar3 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  (**(code **)(*plVar3 + 0x58))
            (plVar3,&local_50,&local_58,&local_60,auStack_68,auStack_70,auStack_78);
  if ((local_50 == 0) || (local_60 == 0)) {
    uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    uVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
    uVar6 = (**(code **)(*plVar3 + 0x48))(plVar3);
    uVar7 = (**(code **)(*plVar3 + 0x50))(plVar3);
    uVar4 = (uVar5 & 0xffffffff) + (uVar4 & 0xffffffff) + (uVar6 & 0xffffffff) +
            (uVar7 & 0xffffffff);
    local_58 = 0;
    local_60 = 0x80000000;
    local_50 = uVar4 + (long)((double)(unkuint9)uVar4 * 0.2);
  }
  local_50 = local_50 + (ulong)param_1;
  uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
  lVar1 = ((uVar4 & 0xffffffff) - local_50) + local_60;
  uVar4 = *(ulong *)(this + 0x220);
  if (lVar1 < 0) {
    uVar5 = 0;
    if ((ulong)-lVar1 <= uVar4) {
      uVar5 = uVar4 + lVar1;
    }
  }
  else {
    uVar5 = uVar4 + lVar1;
  }
  uVar6 = *(ulong *)(this + 0x218);
  uVar4 = uVar6;
  if (uVar6 == 0 || uVar6 >= uVar5) {
    uVar4 = uVar5;
  }
  *param_2 = uVar6 != 0 && uVar6 < uVar5;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


