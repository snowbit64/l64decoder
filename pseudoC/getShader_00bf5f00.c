// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShader
// Entry Point: 00bf5f00
// Size: 484 bytes
// Signature: undefined __thiscall getShader(CompiledShaderArchive * this, uint param_1, IShaderObject * * param_2, ulonglong * param_3)


/* CompiledShaderArchive::getShader(unsigned int, IShaderObject*&, unsigned long long&) */

void __thiscall
CompiledShaderArchive::getShader
          (CompiledShaderArchive *this,uint param_1,IShaderObject **param_2,ulonglong *param_3)

{
  long **pplVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long *local_78;
  uint local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_3 = 0;
  if (param_1 == 0xffffffff) {
    uVar3 = 1;
    *param_2 = (IShaderObject *)0x0;
    goto LAB_00bf60b0;
  }
  pplVar1 = (long **)(*(long *)this + (ulong)param_1 * 0x20);
  plVar6 = *pplVar1;
  if (plVar6 == (long *)0x0) {
    local_70[0] = 0;
    local_78 = (long *)getDecompressedImage(this,(ArchiveDataBlock *)(pplVar1 + 1),local_70);
    if (local_78 != (long *)0x0) {
      lVar4 = Watch::getCurrentTicks();
      plVar6 = (long *)(**(code **)(**(long **)(this + 0x108) + 0x10))
                                 (*(long **)(this + 0x108),&local_78);
      *pplVar1 = plVar6;
      lVar5 = Watch::getCurrentTicks();
      *param_3 = lVar5 - lVar4;
      pplVar8 = (long **)(this + 0xf0);
      pplVar9 = (long **)*pplVar8;
      plVar6 = *pplVar1;
      pplVar10 = pplVar8;
      if (pplVar9 != (long **)0x0) {
        pplVar8 = (long **)(this + 0xf0);
        do {
          while (pplVar10 = pplVar9, plVar6 < pplVar10[4]) {
            pplVar8 = pplVar10;
            pplVar9 = (long **)*pplVar10;
            if ((long **)*pplVar10 == (long **)0x0) {
              plVar7 = *pplVar10;
              goto joined_r0x00bf605c;
            }
          }
          if (plVar6 <= pplVar10[4]) break;
          pplVar8 = pplVar10 + 1;
          pplVar9 = (long **)*pplVar8;
        } while ((long **)*pplVar8 != (long **)0x0);
      }
      plVar7 = *pplVar8;
joined_r0x00bf605c:
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)operator_new(0x30);
        plVar7[4] = (long)plVar6;
        *(uint *)(plVar7 + 5) = param_1;
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = (long)pplVar10;
        *pplVar8 = plVar7;
        if (**(long **)(this + 0xe8) != 0) {
          *(long *)(this + 0xe8) = **(long **)(this + 0xe8);
          plVar7 = *pplVar8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0xf0),(__tree_node_base *)plVar7);
        *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
      }
      if ((local_78 != (long *)0x0) && (local_78 != pplVar1[1])) {
        operator_delete__(local_78);
      }
      if (*pplVar1 != (long *)0x0) {
        plVar6 = *pplVar1;
        goto LAB_00bf5f58;
      }
      invalidateProgramsAndShaders();
    }
    uVar3 = 0;
  }
  else {
LAB_00bf5f58:
    uVar3 = 1;
    *param_2 = (IShaderObject *)plVar6;
  }
LAB_00bf60b0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


