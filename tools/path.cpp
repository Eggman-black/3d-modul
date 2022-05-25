#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

const int Row = 500;
const int Col = 500;
const int Floor = 100;
int n = Row * Col * Floor;
int dist[Row*Col*Floor+5];
int from[Row*Col*Floor+5];
class point_dat //for display purposes
{
    private:
        int x,y,z;
        // ex. x*Col*Floor + y*Floor + Floor
        //bool stair;
    public:
        //bool is_stair(int temp_id){ return point[temp_id].stair;}
}point[Row*Col*Floor];
vector<pair<int, int> > edge[Row*Col*Floor]; // first = go to  second = weight

vector<int> dijkstra(int start, int target)
{
    fill(dist,dist+n+5,0);
    fill(from,from+n+5,0);
    priority_queue<pair<int, int> ,vector<pair<int, int> >,greater<pair<int, int> >> pq;

    for(int i=1; i<=n; i++) if(i != start) dist[i]=1e9;
    from[start] = -1;
	pq.push({0,start});

	while(!pq.empty())
	{
		pair<int, int> u=pq.top();
		pq.pop();
		for(pair<int, int> v : edge[u.second])
            if(dist[v.first] > dist[u.second] + v.second)
            {
                dist[v.first] = dist[u.second] + v.second;
                from[v.first] = u.second;
                pq.push({dist[v.first],v.first});
            }
	}
    vector<int> route;
    for(int i=target; i!=-1; i=from[i])
        route.push_back(i);
    reverse(route.begin(),route.end());
    return route;
}
void init();

int main()
{
    init();
    int x,y;
    while(1)
    {
    	cin >> x >> y;
    	vector<int> path = dijkstra(x,y);
    	for(int v:path) cout << v << ' ';
    	cout << '\n';
	}
	return 0;
}

void init(){
    edge[0].push_back({1,1});
    edge[1].push_back({0,1});
    edge[1].push_back({2,1});
    edge[2].push_back({1,1});
    edge[2].push_back({3,1});
    edge[3].push_back({2,1});
    edge[3].push_back({4,1});
    edge[4].push_back({3,1});
    edge[4].push_back({5,1});
    edge[5].push_back({4,1});
    edge[5].push_back({186,1});
    edge[186].push_back({5,1});
    edge[186].push_back({187,1});
    edge[187].push_back({186,1});
    edge[187].push_back({6,1});
    edge[6].push_back({187,1});
    edge[6].push_back({7,1});
    edge[7].push_back({6,1});
    edge[7].push_back({8,1});
    edge[8].push_back({7,1});
    edge[8].push_back({9,1});
    edge[9].push_back({8,1});
    edge[9].push_back({10,1});
    edge[10].push_back({9,1});
    edge[10].push_back({11,1});
    edge[11].push_back({10,1});
    edge[11].push_back({188,1});
    edge[188].push_back({11,1});
    edge[188].push_back({12,1});
    edge[12].push_back({188,1});
    edge[11].push_back({190,1});
    edge[190].push_back({11,1});
    edge[13].push_back({190,1});
    edge[190].push_back({13,1});
    edge[12].push_back({13,1});
    edge[13].push_back({12,1});
    edge[13].push_back({15,1});
    edge[15].push_back({13,1});
    edge[15].push_back({16,1});
    edge[16].push_back({15,1});
    edge[16].push_back({191,1});
    edge[191].push_back({16,1});
    edge[191].push_back({17,1});
    edge[17].push_back({191,1});
    edge[17].push_back({18,1});
    edge[18].push_back({17,1});
    edge[18].push_back({19,1});
    edge[19].push_back({18,1});
    edge[192].push_back({20,1});
    edge[20].push_back({192,1});
    edge[192].push_back({193,1});
    edge[193].push_back({192,1});
    edge[14].push_back({193,1});
    edge[193].push_back({14,1});
    edge[14].push_back({189,1});
    edge[189].push_back({14,1});
    edge[20].push_back({21,1});
    edge[21].push_back({20,1});
    edge[21].push_back({23,1});
    edge[23].push_back({21,1});
    edge[22].push_back({194,1});
    edge[194].push_back({22,1});
    edge[194].push_back({38,1});
    edge[38].push_back({194,1});
    edge[23].push_back({196,1});
    edge[196].push_back({23,1});
    edge[196].push_back({24,1});
    edge[24].push_back({196,1});
    edge[23].push_back({195,1});
    edge[195].push_back({23,1});
    edge[24].push_back({25,1});
    edge[25].push_back({24,1});
    edge[25].push_back({26,1});
    edge[26].push_back({25,1});
    edge[26].push_back({197,1});
    edge[197].push_back({26,1});
    edge[197].push_back({27,1});
    edge[27].push_back({197,1});
    edge[27].push_back({28,1});
    edge[28].push_back({27,1});
    edge[28].push_back({29,1});
    edge[29].push_back({28,1});
    edge[29].push_back({30,1});
    edge[30].push_back({29,1});
    edge[30].push_back({31,1});
    edge[31].push_back({30,1});
    edge[31].push_back({198,1});
    edge[198].push_back({31,1});
    edge[198].push_back({199,1});
    edge[199].push_back({198,1});
    edge[199].push_back({32,1});
    edge[32].push_back({199,1});
    edge[32].push_back({33,1});
    edge[33].push_back({32,1});
    edge[33].push_back({34,1});
    edge[34].push_back({33,1});
    edge[34].push_back({200,1});
    edge[200].push_back({34,1});
    edge[200].push_back({35,1});
    edge[35].push_back({200,1});
    edge[35].push_back({36,1});
    edge[36].push_back({35,1});
    edge[36].push_back({37,1});
    edge[37].push_back({36,1});
    edge[37].push_back({38,1});
    edge[38].push_back({37,1});
    edge[38].push_back({39,1});
    edge[39].push_back({38,1});
    edge[22].push_back({39,1});
    edge[39].push_back({22,1});
    edge[40].push_back({41,1});
    edge[41].push_back({40,1});
    edge[41].push_back({42,1});
    edge[42].push_back({41,1});
    edge[42].push_back({43,1});
    edge[43].push_back({42,1});
    edge[43].push_back({44,1});
    edge[44].push_back({43,1});
    edge[44].push_back({45,1});
    edge[45].push_back({44,1});
    edge[45].push_back({201,1});
    edge[201].push_back({45,1});
    edge[201].push_back({202,1});
    edge[202].push_back({201,1});
    edge[202].push_back({46,1});
    edge[46].push_back({202,1});
    edge[46].push_back({47,1});
    edge[47].push_back({46,1});
    edge[47].push_back({48,1});
    edge[48].push_back({47,1});
    edge[48].push_back({49,1});
    edge[49].push_back({48,1});
    edge[50].push_back({51,1});
    edge[51].push_back({50,1});
    edge[51].push_back({203,1});
    edge[203].push_back({51,1});
    edge[51].push_back({205,1});
    edge[205].push_back({51,1});
    edge[205].push_back({54,1});
    edge[54].push_back({205,1});
    edge[203].push_back({53,1});
    edge[53].push_back({203,1});
    edge[52].push_back({55,1});
    edge[55].push_back({52,1});
    edge[53].push_back({54,1});
    edge[54].push_back({53,1});
    edge[54].push_back({56,1});
    edge[56].push_back({54,1});
    edge[56].push_back({57,1});
    edge[57].push_back({56,1});
    edge[57].push_back({206,1});
    edge[206].push_back({57,1});
    edge[206].push_back({58,1});
    edge[58].push_back({206,1});
    edge[58].push_back({59,1});
    edge[59].push_back({58,1});
    edge[59].push_back({60,1});
    edge[60].push_back({59,1});
    edge[62].push_back({209,1});
    edge[209].push_back({62,1});
    edge[209].push_back({77,1});
    edge[77].push_back({209,1});
    edge[61].push_back({63,1});
    edge[63].push_back({61,1});
    edge[63].push_back({64,1});
    edge[64].push_back({63,1});
    edge[64].push_back({211,1});
    edge[211].push_back({64,1});
    edge[211].push_back({65,1});
    edge[65].push_back({211,1});
    edge[54].push_back({210,1});
    edge[210].push_back({54,1});
    edge[65].push_back({66,1});
    edge[66].push_back({65,1});
    edge[66].push_back({67,1});
    edge[67].push_back({66,1});
    edge[67].push_back({212,1});
    edge[212].push_back({67,1});
    edge[212].push_back({68,1});
    edge[68].push_back({212,1});
    edge[68].push_back({69,1});
    edge[69].push_back({68,1});
    edge[69].push_back({70,1});
    edge[70].push_back({69,1});
    edge[70].push_back({213,1});
    edge[213].push_back({70,1});
    edge[213].push_back({214,1});
    edge[214].push_back({213,1});
    edge[214].push_back({71,1});
    edge[71].push_back({214,1});
    edge[71].push_back({72,1});
    edge[72].push_back({71,1});
    edge[72].push_back({73,1});
    edge[73].push_back({72,1});
    edge[73].push_back({215,1});
    edge[215].push_back({73,1});
    edge[74].push_back({215,1});
    edge[215].push_back({74,1});
    edge[74].push_back({75,1});
    edge[75].push_back({74,1});
    edge[75].push_back({76,1});
    edge[76].push_back({75,1});
    edge[209].push_back({77,1});
    edge[77].push_back({209,1});
    edge[208].push_back({61,1});
    edge[61].push_back({208,1});
    edge[208].push_back({55,1});
    edge[55].push_back({208,1});
    edge[204].push_back({55,1});
    edge[55].push_back({204,1});
    edge[78].push_back({79,1});
    edge[79].push_back({78,1});
    edge[79].push_back({80,1});
    edge[80].push_back({79,1});
    edge[80].push_back({81,1});
    edge[81].push_back({80,1});
    edge[81].push_back({82,1});
    edge[82].push_back({81,1});
    edge[82].push_back({83,1});
    edge[83].push_back({82,1});
    edge[83].push_back({216,1});
    edge[216].push_back({83,1});
    edge[216].push_back({217,1});
    edge[217].push_back({216,1});
    edge[217].push_back({84,1});
    edge[84].push_back({217,1});
    edge[84].push_back({85,1});
    edge[85].push_back({84,1});
    edge[85].push_back({86,1});
    edge[86].push_back({85,1});
    edge[86].push_back({87,1});
    edge[87].push_back({86,1});
    edge[87].push_back({88,1});
    edge[88].push_back({87,1});
    edge[88].push_back({89,1});
    edge[89].push_back({88,1});
    edge[89].push_back({218,1});
    edge[218].push_back({89,1});
    edge[89].push_back({220,1});
    edge[220].push_back({89,1});
    edge[218].push_back({91,1});
    edge[91].push_back({218,1});
    edge[220].push_back({92,1});
    edge[92].push_back({220,1});
    edge[91].push_back({92,1});
    edge[92].push_back({91,1});
    edge[92].push_back({95,1});
    edge[95].push_back({92,1});
    edge[95].push_back({96,1});
    edge[96].push_back({95,1});
    edge[96].push_back({221,1});
    edge[221].push_back({96,1});
    edge[221].push_back({99,1});
    edge[99].push_back({221,1});
    edge[99].push_back({100,1});
    edge[100].push_back({99,1});
    edge[100].push_back({101,1});
    edge[101].push_back({100,1});
    edge[101].push_back({103,1});
    edge[103].push_back({101,1});
    edge[103].push_back({118,1});
    edge[118].push_back({103,1});
    edge[118].push_back({119,1});
    edge[119].push_back({118,1});
    edge[225].push_back({105,1});
    edge[105].push_back({225,1});
    edge[105].push_back({226,1});
    edge[226].push_back({105,1});
    edge[226].push_back({106,1});
    edge[106].push_back({226,1});
    edge[106].push_back({107,1});
    edge[107].push_back({106,1});
    edge[107].push_back({108,1});
    edge[108].push_back({107,1});
    edge[108].push_back({227,1});
    edge[227].push_back({108,1});
    edge[227].push_back({109,1});
    edge[109].push_back({227,1});
    edge[109].push_back({110,1});
    edge[110].push_back({109,1});
    edge[110].push_back({111,1});
    edge[111].push_back({110,1});
    edge[111].push_back({228,1});
    edge[228].push_back({111,1});
    edge[228].push_back({229,1});
    edge[229].push_back({228,1});
    edge[229].push_back({112,1});
    edge[112].push_back({229,1});
    edge[112].push_back({113,1});
    edge[113].push_back({112,1});
    edge[113].push_back({114,1});
    edge[114].push_back({113,1});
    edge[114].push_back({230,1});
    edge[230].push_back({114,1});
    edge[230].push_back({115,1});
    edge[115].push_back({230,1});
    edge[115].push_back({116,1});
    edge[116].push_back({115,1});
    edge[116].push_back({117,1});
    edge[117].push_back({116,1});
    edge[117].push_back({118,1});
    edge[118].push_back({117,1});
    edge[102].push_back({104,1});
    edge[104].push_back({102,1});
    edge[104].push_back({105,1});
    edge[105].push_back({104,1});
    edge[102].push_back({223,1});
    edge[223].push_back({102,1});
    edge[97].push_back({223,1});
    edge[223].push_back({97,1});
    edge[97].push_back({98,1});
    edge[98].push_back({97,1});
    edge[93].push_back({97,1});
    edge[97].push_back({93,1});
    edge[93].push_back({94,1});
    edge[94].push_back({93,1});
    edge[90].push_back({93,1});
    edge[93].push_back({90,1});
    edge[90].push_back({78,1});
    edge[78].push_back({90,1});
    edge[120].push_back({121,1});
    edge[121].push_back({120,1});
    edge[121].push_back({122,1});
    edge[122].push_back({121,1});
    edge[122].push_back({123,1});
    edge[123].push_back({122,1});
    edge[123].push_back({124,1});
    edge[124].push_back({123,1});
    edge[124].push_back({125,1});
    edge[125].push_back({124,1});
    edge[125].push_back({231,1});
    edge[231].push_back({125,1});
    edge[231].push_back({232,1});
    edge[232].push_back({231,1});
    edge[232].push_back({126,1});
    edge[126].push_back({232,1});
    edge[126].push_back({127,1});
    edge[127].push_back({126,1});
    edge[127].push_back({128,1});
    edge[128].push_back({127,1});
    edge[128].push_back({129,1});
    edge[129].push_back({128,1});
    edge[129].push_back({130,1});
    edge[130].push_back({129,1});
    edge[130].push_back({131,1});
    edge[131].push_back({130,1});
    edge[131].push_back({234,1});
    edge[234].push_back({131,1});
    edge[234].push_back({235,1});
    edge[235].push_back({234,1});
    edge[235].push_back({140,1});
    edge[140].push_back({235,1});
    edge[140].push_back({141,1});
    edge[141].push_back({140,1});
    edge[141].push_back({142,1});
    edge[142].push_back({141,1});
    edge[142].push_back({144,1});
    edge[144].push_back({142,1});
    edge[144].push_back({238,1});
    edge[238].push_back({144,1});
    edge[238].push_back({163,1});
    edge[163].push_back({238,1});
    edge[239].push_back({146,1});
    edge[146].push_back({239,1});
    edge[146].push_back({240,1});
    edge[240].push_back({146,1});
    edge[240].push_back({147,1});
    edge[147].push_back({240,1});
    edge[147].push_back({148,1});
    edge[148].push_back({147,1});
    edge[148].push_back({149,1});
    edge[149].push_back({148,1});
    edge[149].push_back({241,1});
    edge[241].push_back({149,1});
    edge[241].push_back({150,1});
    edge[150].push_back({241,1});
    edge[150].push_back({151,1});
    edge[151].push_back({150,1});
    edge[151].push_back({152,1});
    edge[152].push_back({151,1});
    edge[152].push_back({153,1});
    edge[153].push_back({152,1});
    edge[153].push_back({154,1});
    edge[154].push_back({153,1});
    edge[243].push_back({155,1});
    edge[155].push_back({243,1});
    edge[155].push_back({156,1});
    edge[156].push_back({155,1});
    edge[156].push_back({157,1});
    edge[157].push_back({156,1});
    edge[157].push_back({158,1});
    edge[158].push_back({157,1});
    edge[158].push_back({159,1});
    edge[159].push_back({158,1});
    edge[159].push_back({244,1});
    edge[244].push_back({159,1});
    edge[244].push_back({160,1});
    edge[160].push_back({244,1});
    edge[160].push_back({161,1});
    edge[161].push_back({160,1});
    edge[161].push_back({162,1});
    edge[162].push_back({161,1});
    edge[162].push_back({163,1});
    edge[163].push_back({162,1});
    edge[163].push_back({238,1});
    edge[238].push_back({163,1});
    edge[143].push_back({145,1});
    edge[145].push_back({143,1});
    edge[145].push_back({156,1});
    edge[156].push_back({145,1});
    edge[239].push_back({143,1});
    edge[143].push_back({239,1});
    edge[239].push_back({139,1});
    edge[139].push_back({239,1});
    edge[134].push_back({136,1});
    edge[136].push_back({134,1});
    edge[136].push_back({138,1});
    edge[138].push_back({136,1});
    edge[138].push_back({139,1});
    edge[139].push_back({138,1});
    edge[134].push_back({135,1});
    edge[135].push_back({134,1});
    edge[136].push_back({137,1});
    edge[137].push_back({136,1});
    edge[135].push_back({137,1});
    edge[137].push_back({135,1});
    edge[132].push_back({134,1});
    edge[134].push_back({132,1});
    edge[132].push_back({133,1});
    edge[133].push_back({132,1});
    edge[135].push_back({233,1});
    edge[233].push_back({135,1});
    edge[120].push_back({133,1});
    edge[133].push_back({120,1});
    edge[120].push_back({233,1});
    edge[233].push_back({120,1});
    edge[186].push_back({201,1});
    edge[201].push_back({186,1});
    edge[187].push_back({202,1});
    edge[202].push_back({187,1});
    edge[201].push_back({216,1});
    edge[216].push_back({201,1});
    edge[202].push_back({217,1});
    edge[217].push_back({202,1});
    edge[216].push_back({231,1});
    edge[231].push_back({216,1});
    edge[217].push_back({232,1});
    edge[232].push_back({217,1});
    edge[188].push_back({203,1});
    edge[203].push_back({188,1});
    edge[190].push_back({205,1});
    edge[205].push_back({190,1});
    edge[203].push_back({218,1});
    edge[218].push_back({203,1});
    edge[205].push_back({220,1});
    edge[220].push_back({205,1});
    edge[220].push_back({234,1});
    edge[234].push_back({220,1});
    edge[191].push_back({206,1});
    edge[206].push_back({191,1});
    edge[194].push_back({209,1});
    edge[209].push_back({194,1});
    edge[206].push_back({221,1});
    edge[221].push_back({206,1});
    edge[209].push_back({224,1});
    edge[224].push_back({209,1});
    edge[221].push_back({235,1});
    edge[235].push_back({221,1});
    edge[224].push_back({238,1});
    edge[238].push_back({224,1});
    edge[195].push_back({210,1});
    edge[210].push_back({195,1});
    edge[196].push_back({211,1});
    edge[211].push_back({196,1});
    edge[197].push_back({212,1});
    edge[212].push_back({197,1});
    edge[198].push_back({213,1});
    edge[213].push_back({198,1});
    edge[199].push_back({214,1});
    edge[214].push_back({199,1});
    edge[200].push_back({215,1});
    edge[215].push_back({200,1});
    edge[210].push_back({225,1});
    edge[225].push_back({210,1});
    edge[211].push_back({226,1});
    edge[226].push_back({211,1});
    edge[212].push_back({227,1});
    edge[227].push_back({212,1});
    edge[213].push_back({228,1});
    edge[228].push_back({213,1});
    edge[214].push_back({229,1});
    edge[229].push_back({214,1});
    edge[215].push_back({230,1});
    edge[230].push_back({215,1});
    edge[225].push_back({239,1});
    edge[239].push_back({225,1});
    edge[226].push_back({240,1});
    edge[240].push_back({226,1});
    edge[227].push_back({241,1});
    edge[241].push_back({227,1});
    edge[228].push_back({242,1});
    edge[242].push_back({228,1});
    edge[229].push_back({243,1});
    edge[243].push_back({229,1});
    edge[230].push_back({244,1});
    edge[244].push_back({230,1});
    edge[192].push_back({208,1});
    edge[208].push_back({192,1});
    edge[208].push_back({223,1});
    edge[223].push_back({208,1});
    edge[223].push_back({237,1});
    edge[237].push_back({223,1});
    edge[189].push_back({204,1});
    edge[204].push_back({189,1});
    edge[204].push_back({219,1});
    edge[219].push_back({204,1});
    edge[219].push_back({233,1});
    edge[233].push_back({219,1});

}
