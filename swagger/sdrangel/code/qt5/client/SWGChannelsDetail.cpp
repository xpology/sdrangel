/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGChannelsDetail.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGChannelsDetail::SWGChannelsDetail(QString* json) {
    init();
    this->fromJson(*json);
}

SWGChannelsDetail::SWGChannelsDetail() {
    channelcount = 0;
    m_channelcount_isSet = false;
    channels = nullptr;
    m_channels_isSet = false;
}

SWGChannelsDetail::~SWGChannelsDetail() {
    this->cleanup();
}

void
SWGChannelsDetail::init() {
    channelcount = 0;
    m_channelcount_isSet = false;
    channels = new QList<SWGChannel*>();
    m_channels_isSet = false;
}

void
SWGChannelsDetail::cleanup() {

    if(channels != nullptr) { 
        auto arr = channels;
        for(auto o: *arr) { 
            delete o;
        }
        delete channels;
    }
}

SWGChannelsDetail*
SWGChannelsDetail::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGChannelsDetail::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channelcount, pJson["channelcount"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&channels, pJson["channels"], "QList", "SWGChannel");
}

QString
SWGChannelsDetail::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGChannelsDetail::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channelcount_isSet){
        obj->insert("channelcount", QJsonValue(channelcount));
    }
    if(channels && channels->size() > 0){
        toJsonArray((QList<void*>*)channels, obj, "channels", "SWGChannel");
    }

    return obj;
}

qint32
SWGChannelsDetail::getChannelcount() {
    return channelcount;
}
void
SWGChannelsDetail::setChannelcount(qint32 channelcount) {
    this->channelcount = channelcount;
    this->m_channelcount_isSet = true;
}

QList<SWGChannel*>*
SWGChannelsDetail::getChannels() {
    return channels;
}
void
SWGChannelsDetail::setChannels(QList<SWGChannel*>* channels) {
    this->channels = channels;
    this->m_channels_isSet = true;
}


bool
SWGChannelsDetail::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channelcount_isSet){
            isObjectUpdated = true; break;
        }
        if(channels && (channels->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

