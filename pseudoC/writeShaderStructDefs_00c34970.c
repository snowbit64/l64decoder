// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeShaderStructDefs
// Entry Point: 00c34970
// Size: 720 bytes
// Signature: undefined __cdecl writeShaderStructDefs(SharedContext * param_1, CodeStringStream * param_2, vector * param_3)


/* IR_HllConvertUtil::writeShaderStructDefs(IR_HllConvertUtil::SharedContext&, CodeStringStream&,
   std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout> > const&) */

void IR_HllConvertUtil::writeShaderStructDefs
               (SharedContext *param_1,CodeStringStream *param_2,vector *param_3)

{
  ShaderStructLayout *pSVar1;
  ShaderStructLayout *pSVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char acStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar5) {
    uVar6 = 0;
    do {
      pSVar1 = (ShaderStructLayout *)(lVar5 + uVar6 * 0x40);
      if (pSVar1[0x19] == (ShaderStructLayout)0x2) {
        StringStream::pushString((StringStream *)param_2,"struct ");
        pSVar2 = pSVar1 + 1;
        if (((byte)*pSVar1 & 1) != 0) {
          pSVar2 = *(ShaderStructLayout **)(pSVar1 + 0x10);
        }
        StringStream::pushString((StringStream *)param_2,(char *)pSVar2);
        StringStream::pushString((StringStream *)param_2,"\n{\n");
        writeStructLayoutFieldsBuffer(pSVar1,"",(StringStream *)param_2,(ShaderLanguage *)param_1);
        pcVar4 = "};\n\n";
LAB_00c34a30:
        StringStream::pushString((StringStream *)param_2,pcVar4);
        goto switchD_00c34ae4_caseD_6;
      }
      if (pSVar1[0x19] == (ShaderStructLayout)0x1) {
        StringStream::pushString((StringStream *)param_2,"/*__implicit_struct ");
        pSVar2 = pSVar1 + 1;
        if (((byte)*pSVar1 & 1) != 0) {
          pSVar2 = *(ShaderStructLayout **)(lVar5 + uVar6 * 0x40 + 0x10);
        }
        StringStream::pushString((StringStream *)param_2,(char *)pSVar2);
        StringStream::pushString((StringStream *)param_2,"\n{\n");
        writeStructLayoutFieldsBuffer(pSVar1,"",(StringStream *)param_2,(ShaderLanguage *)param_1);
        pcVar4 = "};*/\n\n";
        goto LAB_00c34a30;
      }
      switch(*(undefined4 *)param_1) {
      case 1:
      case 2:
        pcVar4 = "cbuffer ";
        goto LAB_00c34b14;
      case 3:
        pcVar4 = "ConstantBuffer ";
LAB_00c34b14:
        StringStream::pushString((StringStream *)param_2,pcVar4);
        pSVar2 = pSVar1 + 1;
        if (((byte)*pSVar1 & 1) != 0) {
          pSVar2 = *(ShaderStructLayout **)(lVar5 + uVar6 * 0x40 + 0x10);
        }
        StringStream::pushString((StringStream *)param_2,(char *)pSVar2);
        StringStream::pushString((StringStream *)param_2," : register(b");
        FUN_00c34f44(acStack_88);
        StringStream::pushString((StringStream *)param_2,acStack_88);
        pcVar4 = ")\n{\n";
        goto LAB_00c34bd8;
      case 4:
        pcVar4 = "struct ";
        break;
      case 5:
        pcVar4 = "struct CB_";
        break;
      case 6:
        StringStream::pushString((StringStream *)param_2,"[[vk::binding(");
        FUN_00c34f44(acStack_88);
        StringStream::pushString((StringStream *)param_2,acStack_88);
        pcVar4 = ", 0)]] cbuffer ";
        break;
      default:
        goto switchD_00c34ae4_caseD_6;
      }
      StringStream::pushString((StringStream *)param_2,pcVar4);
      pSVar2 = pSVar1 + 1;
      if (((byte)*pSVar1 & 1) != 0) {
        pSVar2 = *(ShaderStructLayout **)(lVar5 + uVar6 * 0x40 + 0x10);
      }
      StringStream::pushString((StringStream *)param_2,(char *)pSVar2);
      pcVar4 = "\n{\n";
LAB_00c34bd8:
      StringStream::pushString((StringStream *)param_2,pcVar4);
      writeStructLayoutFieldsBuffer(pSVar1,"",(StringStream *)param_2,(ShaderLanguage *)param_1);
      StringStream::pushString((StringStream *)param_2,"};\n\n");
switchD_00c34ae4_caseD_6:
      lVar5 = *(long *)param_3;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(param_3 + 8) - lVar5 >> 6));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


