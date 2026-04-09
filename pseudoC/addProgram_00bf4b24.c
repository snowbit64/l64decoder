// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addProgram
// Entry Point: 00bf4b24
// Size: 908 bytes
// Signature: undefined __thiscall addProgram(CompiledShaderArchive * this, uint param_1, uchar * param_2, CompiledProgramObjectDesc * param_3, IProgramObject * * param_4, uint * param_5, ShaderStructLayout * * param_6)


/* CompiledShaderArchive::addProgram(unsigned int, unsigned char const*, CompiledProgramObjectDesc
   const&, IProgramObject*&, unsigned int&, ShaderStructLayout*&) */

byte __thiscall
CompiledShaderArchive::addProgram
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,
          CompiledProgramObjectDesc *param_3,IProgramObject **param_4,uint *param_5,
          ShaderStructLayout **param_6)

{
  __tree_node_base **this_00;
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  pair pVar5;
  void *__dest;
  ulong uVar7;
  IProgramObject *pIVar8;
  undefined8 *puVar9;
  CompiledShaderArchive **ppCVar10;
  __tree_node_base **pp_Var11;
  CompiledShaderArchive **ppCVar12;
  __tree_node_base **pp_Var13;
  CompiledShaderArchive *pCVar14;
  __tree_node_base *p_Var15;
  CompiledShaderArchive **ppCVar16;
  CompiledShaderArchive **ppCVar17;
  CompiledShaderArchive **ppCVar18;
  uint local_84;
  undefined8 local_80;
  void *local_78;
  int local_70;
  uint uStack_6c;
  long local_68;
  __tree_node_base *p_Var6;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 < 0xff) {
    __dest = operator_new__((ulong)param_1);
    memcpy(__dest,param_2,(ulong)param_1);
    puVar9 = &local_80;
    local_80 = (IProgramObject *)CONCAT44(local_80._4_4_,param_1);
    this_00 = (__tree_node_base **)(this + 0x48);
    iVar2 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 3) * -0x55555555;
    local_78 = __dest;
    local_70 = iVar2;
    pVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
                        *)this_00,(ProgramId *)puVar9,(pair *)&local_80);
    p_Var6 = (__tree_node_base *)(ulong)pVar5;
    if (((ulong)puVar9 & 0xff) == 0) {
      operator_delete__(__dest);
      bVar4 = getProgram(this,*(uint *)(p_Var6 + 0x30),param_4,param_5,param_6,&local_80);
      goto LAB_00bf4d5c;
    }
    ppCVar10 = (CompiledShaderArchive **)(this + 0xf0);
    ppCVar12 = (CompiledShaderArchive **)*ppCVar10;
    if (ppCVar12 == (CompiledShaderArchive **)0x0) {
LAB_00bf4c20:
      ppCVar18 = ppCVar10;
    }
    else {
      pCVar14 = *(CompiledShaderArchive **)param_3;
      ppCVar16 = ppCVar12;
      ppCVar18 = ppCVar10;
      do {
        if (ppCVar16[4] >= pCVar14) {
          ppCVar18 = ppCVar16;
        }
        ppCVar16 = (CompiledShaderArchive **)ppCVar16[ppCVar16[4] < pCVar14];
      } while (ppCVar16 != (CompiledShaderArchive **)0x0);
      if ((ppCVar18 == ppCVar10) || (pCVar14 < ppCVar18[4])) goto LAB_00bf4c20;
    }
    if (ppCVar12 == (CompiledShaderArchive **)0x0) {
LAB_00bf4c64:
      ppCVar16 = ppCVar10;
    }
    else {
      pCVar14 = *(CompiledShaderArchive **)(param_3 + 8);
      ppCVar17 = ppCVar12;
      ppCVar16 = ppCVar10;
      do {
        if (ppCVar17[4] >= pCVar14) {
          ppCVar16 = ppCVar17;
        }
        ppCVar17 = (CompiledShaderArchive **)ppCVar17[ppCVar17[4] < pCVar14];
      } while (ppCVar17 != (CompiledShaderArchive **)0x0);
      if ((ppCVar16 == ppCVar10) || (pCVar14 < ppCVar16[4])) goto LAB_00bf4c64;
    }
    if (ppCVar12 == (CompiledShaderArchive **)0x0) {
LAB_00bf4cb0:
      pp_Var13 = *(__tree_node_base ***)(p_Var6 + 8);
      if (*(__tree_node_base ***)(p_Var6 + 8) == (__tree_node_base **)0x0) {
        pp_Var13 = (__tree_node_base **)(p_Var6 + 0x10);
        pp_Var11 = (__tree_node_base **)*pp_Var13;
        if (*pp_Var11 != p_Var6) {
          do {
            p_Var15 = *pp_Var13;
            pp_Var13 = (__tree_node_base **)(p_Var15 + 0x10);
            pp_Var11 = (__tree_node_base **)*pp_Var13;
          } while (*pp_Var11 != p_Var15);
        }
      }
      else {
        do {
          pp_Var11 = pp_Var13;
          pp_Var13 = (__tree_node_base **)*pp_Var11;
        } while ((__tree_node_base **)*pp_Var11 != (__tree_node_base **)0x0);
      }
      if (*this_00 == p_Var6) {
        *this_00 = (__tree_node_base *)pp_Var11;
      }
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x50),p_Var6);
      operator_delete(p_Var6);
    }
    else {
      pCVar14 = *(CompiledShaderArchive **)(param_3 + 0x10);
      ppCVar17 = ppCVar10;
      do {
        if (ppCVar12[4] >= pCVar14) {
          ppCVar17 = ppCVar12;
        }
        ppCVar12 = (CompiledShaderArchive **)ppCVar12[ppCVar12[4] < pCVar14];
      } while (ppCVar12 != (CompiledShaderArchive **)0x0);
      if ((ppCVar17 == ppCVar10) ||
         (((pCVar14 < ppCVar17[4] || ppCVar18 == ppCVar10) || ppCVar16 == ppCVar10) ||
          ppCVar17 == ppCVar10)) goto LAB_00bf4cb0;
      uVar7 = addStructLayouts(this,*(uint *)(param_3 + 0x18),
                               *(ShaderStructLayout **)(param_3 + 0x20),&local_84);
      if ((uVar7 & 1) != 0) {
        puVar9 = &local_80;
        local_80 = (IProgramObject *)
                   CONCAT44(*(undefined4 *)(ppCVar16 + 5),*(undefined4 *)(ppCVar18 + 5));
        local_78 = (void *)CONCAT44(local_84,*(undefined4 *)(ppCVar17 + 5));
        local_70 = iVar2;
        pVar5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                ::
                __emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>
                          ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                            *)(this + 0x88),(ProgramHash *)puVar9,(pair *)&local_80);
        if (((ulong)puVar9 & 0xff) == 0) {
          uVar1 = *(uint *)((ulong)pVar5 + 0x2c);
          *(uint *)(p_Var6 + 0x30) = uVar1;
          bVar4 = getProgram(this,uVar1,param_4,param_5,param_6,&local_80);
        }
        else {
          pIVar8 = (IProgramObject *)
                   (**(code **)(**(long **)(this + 0x108) + 0x18))(*(long **)(this + 0x108),param_3)
          ;
          local_80 = pIVar8;
          if (pIVar8 == (IProgramObject *)0x0) {
            FUN_00bf5590((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                          *)(this + 0x88),(ulong)pVar5);
            FUN_00bf5008(this_00,p_Var6);
            operator_delete__(__dest);
          }
          else {
            local_70 = *(int *)(ppCVar17 + 5);
            local_78 = (void *)CONCAT44(*(undefined4 *)(ppCVar16 + 5),*(undefined4 *)(ppCVar18 + 5))
            ;
            uStack_6c = local_84;
            FUN_00bf5624(this + 0x18,&local_80);
            *param_4 = local_80;
            getStructLayouts(this,local_84,param_5,param_6);
          }
          bVar4 = pIVar8 != (IProgramObject *)0x0;
        }
        goto LAB_00bf4d5c;
      }
      FUN_00bf5008(this_00,p_Var6);
    }
    operator_delete__(__dest);
  }
  bVar4 = 0;
LAB_00bf4d5c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return bVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


