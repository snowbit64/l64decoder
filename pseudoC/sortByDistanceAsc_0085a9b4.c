// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortByDistanceAsc
// Entry Point: 0085a9b4
// Size: 20 bytes
// Signature: undefined __cdecl sortByDistanceAsc(TempSendData * param_1, TempSendData * param_2)


/* DensityMapSyncer::TempSendData::sortByDistanceAsc(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&) */

bool DensityMapSyncer::TempSendData::sortByDistanceAsc(TempSendData *param_1,TempSendData *param_2)

{
  return *(float *)(param_1 + 4) < *(float *)(param_2 + 4);
}


