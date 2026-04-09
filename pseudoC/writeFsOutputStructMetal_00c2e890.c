// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeFsOutputStructMetal
// Entry Point: 00c2e890
// Size: 260 bytes
// Signature: undefined __cdecl writeFsOutputStructMetal(ConversionContext * param_1, CodeStringStream * param_2)


/* IR_HllConvertUtil::writeFsOutputStructMetal(IR_HllConvertUtil::ConversionContext&,
   CodeStringStream&) */

void IR_HllConvertUtil::writeFsOutputStructMetal
               (ConversionContext *param_1,CodeStringStream *param_2)

{
  CodeStringStream::writeLine((char *)param_2,"struct GSSC_FS_OUTPUT\n{\n");
  CodeStringStream::changeIndent(param_2,4);
  if (param_1[0x20] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"float4 GS_COLOR_OUTPUT_%u [[color(%u)]];\n",0,0);
  }
  if (param_1[0x21] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"float4 GS_COLOR_OUTPUT_%u [[color(%u)]];\n",1,1);
  }
  if (param_1[0x22] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"float4 GS_COLOR_OUTPUT_%u [[color(%u)]];\n",2,2);
  }
  if (param_1[0x23] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"float4 GS_COLOR_OUTPUT_%u [[color(%u)]];\n",3,3);
  }
  if (param_1[0x24] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"float GS_DEPTH_OUTPUT [[depth(any)]];\n");
  }
  if (param_1[0x25] != (ConversionContext)0x0) {
    CodeStringStream::writeLine((char *)param_2,"uint GS_SAMPLE_MASK_OUTPUT [[sample_mask]];\n");
  }
  CodeStringStream::changeIndent(param_2,-4);
  CodeStringStream::writeLine((char *)param_2,&DAT_00510f98);
  return;
}


