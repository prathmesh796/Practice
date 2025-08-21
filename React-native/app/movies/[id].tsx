import { StyleSheet, Text, View } from 'react-native'
import React from 'react'
import { useLocalSearchParams } from 'expo-router'

const MovieDetailScreen = () => {
    const {id} = useLocalSearchParams()

    return (
    <View>
      <Text>Movie Detail - {id}</Text>
    </View>
  )
}

export default MovieDetailScreen

const styles = StyleSheet.create({})