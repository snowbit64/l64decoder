// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateProgramsAndShaders
// Entry Point: 00bf6694
// Size: 460 bytes
// Signature: undefined invalidateProgramsAndShaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompiledShaderArchive::invalidateProgramsAndShaders() */

void CompiledShaderArchive::invalidateProgramsAndShaders(void)

{
  bool bVar1;
  long *in_x0;
  void *pvVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  __tree_node **pp_Var7;
  ulong uVar8;
  long **pplVar9;
  
  if (in_x0[4] != in_x0[3]) {
    in_x0[4] = in_x0[3];
  }
  pplVar9 = (long **)in_x0[9];
  while (pplVar9 != (long **)(in_x0 + 10)) {
    if (pplVar9[5] != (long *)0x0) {
      operator_delete__(pplVar9[5]);
    }
    pplVar4 = (long **)pplVar9[1];
    if ((long **)pplVar9[1] == (long **)0x0) {
      pplVar4 = pplVar9 + 2;
      bVar1 = (long **)**pplVar4 != pplVar9;
      pplVar9 = (long **)*pplVar4;
      if (bVar1) {
        do {
          plVar5 = *pplVar4;
          pplVar4 = (long **)(plVar5 + 2);
          pplVar9 = (long **)*pplVar4;
        } while (*pplVar9 != plVar5);
      }
    }
    else {
      do {
        pplVar9 = pplVar4;
        pplVar4 = (long **)*pplVar9;
      } while ((long **)*pplVar9 != (long **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
             *)(in_x0 + 9),(__tree_node *)in_x0[10]);
  in_x0[10] = 0;
  in_x0[0xb] = 0;
  in_x0[9] = (long)(in_x0 + 10);
  pp_Var7 = (__tree_node **)(in_x0 + 0x12);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
             *)(in_x0 + 0x11),*pp_Var7);
  lVar3 = *in_x0;
  lVar6 = in_x0[1];
  in_x0[0x11] = (long)pp_Var7;
  in_x0[0x13] = 0;
  *pp_Var7 = (__tree_node *)0x0;
  if (lVar6 != lVar3) {
    uVar8 = 0;
    do {
      pvVar2 = *(void **)(lVar3 + uVar8 * 0x20 + 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        lVar3 = *in_x0;
        lVar6 = in_x0[1];
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar6 - lVar3 >> 5));
    if (lVar6 - lVar3 != 0) {
      in_x0[1] = lVar3;
    }
  }
  pplVar9 = (long **)in_x0[0xc];
  while (pplVar9 != (long **)(in_x0 + 0xd)) {
    if (pplVar9[5] != (long *)0x0) {
      operator_delete__(pplVar9[5]);
    }
    pplVar4 = (long **)pplVar9[1];
    if ((long **)pplVar9[1] == (long **)0x0) {
      pplVar4 = pplVar9 + 2;
      bVar1 = (long **)**pplVar4 != pplVar9;
      pplVar9 = (long **)*pplVar4;
      if (bVar1) {
        do {
          plVar5 = *pplVar4;
          pplVar4 = (long **)(plVar5 + 2);
          pplVar9 = (long **)*pplVar4;
        } while (*pplVar9 != plVar5);
      }
    }
    else {
      do {
        pplVar9 = pplVar4;
        pplVar4 = (long **)*pplVar9;
      } while ((long **)*pplVar9 != (long **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
             *)(in_x0 + 0xc),(__tree_node *)in_x0[0xd]);
  in_x0[0xd] = 0;
  in_x0[0xe] = 0;
  in_x0[0xc] = (long)(in_x0 + 0xd);
  pp_Var7 = (__tree_node **)(in_x0 + 0x15);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
             *)(in_x0 + 0x14),*pp_Var7);
  in_x0[0x14] = (long)pp_Var7;
  *pp_Var7 = (__tree_node *)0x0;
  in_x0[0x16] = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
             *)(in_x0 + 0x17),(__tree_node *)in_x0[0x18]);
  in_x0[0x17] = (long)(in_x0 + 0x18);
  in_x0[0x18] = 0;
  in_x0[0x19] = 0;
  return;
}


